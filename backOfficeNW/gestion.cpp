/**
 *  @file gestion.cpp
 *  @author A.Fontraille
 *  @brief Permet de pouvoir gérer les produits et les rayons
 *  @date 4 septembre 2015
 *  @version 1
 */

#include "gestion.h"
#include "ui_gestion.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlRelationalTableModel>
#include <QSqlRelation>
#include <QSqlTableModel>
#include <QSqlRelationalDelegate>
#include <QSqlRecord>
#include <QModelIndex>
#include <QDebug>
#include <QSqlError>
#include <QSqlField>
#include <iostream>
#include <QAbstractItemView>

/**
 * @brief Si lorsque l'identifiant ou le mdp de la base de données est incorrect
 * alors un msg d'erreur apparait
 * sinon, la connexion a la base se fait bien, et ouvre alors la page connexion
 * @param parent
 */
gestion::gestion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestion)
{
    ui->setupUi(this);
    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
    maBase=new QSqlDatabase(db);
    maBase->setHostName("localhost");
    maBase->setDatabaseName("newWorld2");
    maBase->setUserName("root");
    maBase->setPassword("");
    bool ok = maBase->open();
    if(!ok)
    {
        QMessageBox::warning(this,"New World BackOffice","La connexion à la base de données a échoué \n Veuillez vérifier que le service mysql est lancé sur localhost",QMessageBox::Ok|QMessageBox::Cancel,QMessageBox::Ok);
    }
    else
    {
        modelRayon=new QSqlTableModel(this,*maBase);
        modelRayon->setTable("shelf");
        ui->tableViewRayons->setModel(modelRayon);
        modelRayon->select();
        modelRayon->setHeaderData(1,Qt::Horizontal, trUtf8("Nom"));
        modelRayon->setEditStrategy(QSqlTableModel::OnFieldChange);
        modelProduit=new QSqlRelationalTableModel(this,*maBase);
        modelProduit->setTable("category");
        modelProduit->setEditStrategy(QSqlTableModel::OnFieldChange);
        ui->tableViewProduits->setModel(modelProduit);
        modelProduit->setRelation(2, QSqlRelation("shelf", "id", "libelle"));
        modelProduit->select();
        modelProduit->setHeaderData(1,Qt::Horizontal, trUtf8("Nom"));
        modelProduit->setHeaderData(2,Qt::Horizontal, trUtf8("Nom du rayon"));


        //Cacher l'identifiant pour les rayons et les produits
        ui->tableViewRayons->hideColumn(0);
        ui->tableViewProduits->hideColumn(0);
        ui->tableViewProduits->hideColumn(3);
        ui->tableViewRayons->hideColumn(2);
        modelProduit->setEditStrategy(QSqlRelationalTableModel::OnManualSubmit);

        //REMPLIR COMBO BOX AJOUT
        QString requete="select * from shelf;";
        //exécution de la requête
        QSqlQuery reqEx(requete);
        //boucle pour remplir ma comboBox
        while(reqEx.next())
        {
            ui->comboBox->addItem(reqEx.value(1).toString(), reqEx.value(0).toInt());
        }

        //REMPLIR COMBO BOX MODIF
        QString req="select * from shelf;";
        //exécution de la requête
        QSqlQuery reqExModif(req);

        //boucle pour remplir ma comboBox
        while(reqExModif.next())
        {
            ui->comboBoxModif->addItem(reqExModif.value(1).toString(), reqExModif.value(0).toInt());
        }

    }

}

//QAbstractItemView::edit(const QModelIndex &index);

gestion::~gestion()
{
    delete ui;
}

/**
 * @brief permet de voir les rayons enregistrée
 * @return void
 * @param QModeIndex &index
 */
void gestion::on_tableViewRayons_clicked(const QModelIndex &index)
{
    ui->lineEditModifRayons->setText(index.data(Qt::DisplayRole).toString());
}

/**
 * @brief permet de voir les produits enregistrée
 * @return void
 * @param QModeIndex &index
 */
void gestion::on_tableViewProduits_activated(const QModelIndex &index)
{
    modelProduit->setTable("product");
    ui->tableViewProduits->setModel(modelProduit);
    modelProduit->setFilter("modere=true");
    modelProduit->select();
}

/**
 * @brief permet de fermer la fenêtre
 * @return void
 */
void gestion::on_pushButton_clicked()
{
    close();
}

/////////////////////// RAYONS !!!!! //////////////////////////////

/**
 * @brief permet d'ajouter un rayon
 * @return void
 */

void gestion::on_pushButtonAddRayons_clicked()
{
    QString nom=ui->lineEditRayons->text();
    QSqlRecord record=modelRayon->record();
    record.setValue(0,modelRayon->rowCount()+1);
    record.setValue(1,nom);
    modelRayon->insertRecord(modelRayon->rowCount(),record);
    ui->lineEditRayons->clear();
}

/**
 * @brief permet de supprimer un rayon
 * @return void
 */

void gestion::on_pushButtonSupprimerRayons_clicked()
{
    QModelIndex index = ui->tableViewRayons->currentIndex();
    if(!index.isValid())
        return;
    int ligne = index.row();

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Supprimer", "Voulez-vous supprimez ? ",QMessageBox::Yes | QMessageBox::No);

    if (reply != QMessageBox::Yes)
        return;

    if(!modelRayon->removeRow(ligne) || !modelRayon->submitAll()) {
        modelRayon->revertAll();
    }
}

/**
 * @brief permet de modifier un rayon
 * @return void
 * @bug ne permet pas la modification d'un rayon
 */

void gestion::on_pushButtonModifierRayons_clicked()
{
    QString shelf = ui->comboBox->itemData(ui->comboBox->currentIndex()).toString();
    QString libelle = ui->lineEditModifRayons->text();
    //QSqlRecord record=modelProduit->record();


    QItemSelectionModel *model = ui->tableViewRayons->selectionModel();
    QModelIndex cell = modelRayon->index(model->currentIndex().row(), 0);

    QSqlQuery query;
    query.prepare("UPDATE shelf SET libelle=:libelle WHERE id=:id");
    query.bindValue(":libelle", libelle);
    //query.bindValue(":shelf", shelf);
    query.bindValue(":id", cell.data(Qt::DisplayRole).toString());



    if(!query.exec())
        qDebug() << modelRayon->lastError();
    else{
        //modelProduit->submitAll();
    }

    //ui->lineEditModifProd->clear();

    int rows = ui->tableViewRayons->model()->rowCount();

    QModelIndex index = ui->tableViewRayons->model()->index(rows - 1,0);

    ui->tableViewRayons->setCurrentIndex(index);
    ui->tableViewRayons->edit(index);
}

//////////////////// PRODUITS !!!!!!!!!!!! /////////////////////////

/**
 * @brief permet d'ajouter un produit
 * @return void
 * @bug ne permet pas l'ajout, oubli de préciser le type
 */
void gestion::on_pushButtonAddProduit_clicked()
{
    QString typeId = ui->comboBox->itemData(ui->comboBox->currentIndex()).toString();
    int uniqueId = getUniqueIdProduit();
    QString nom=ui->lineEditProduit->text();
    QSqlRecord record=modelProduit->record();

    record.setValue(0,uniqueId);
    record.setValue(1,nom);
    record.setValue(2,typeId);

    if(!modelProduit->insertRecord(modelProduit->rowCount(),record))
        qDebug() << modelProduit->lastError();
    else{
        modelProduit->submitAll();
    }

    ui->lineEditProduit->clear();
}

/**
 * @brief permet de supprimer un produit
 * @return void
 */
void gestion::on_pushButtonSupprimerProduits_clicked()
{
    QModelIndex index = ui->tableViewProduits->currentIndex();
    if(!index.isValid())
        return;
    int ligne = index.row();

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Supprimer", "Voulez-vous supprimez ? ",QMessageBox::Yes | QMessageBox::No);

    if (reply != QMessageBox::Yes)
        return;

    if(!modelProduit->removeRow(ligne) || !modelProduit->submitAll()) {
        modelProduit->revertAll();}
}

/**
 * @brief permet de modifier un produit
 * @return void
 * @bug ne permet pas la modification de produit
 */
void gestion::on_pushButtonModifierProd_clicked()
{
    QString shelf = ui->comboBoxModif->itemData(ui->comboBoxModif->currentIndex()).toString();
    QString libelle = ui->lineEditModifProd->text();
    //QSqlRecord record=modelProduit->record();


    QItemSelectionModel *model = ui->tableViewProduits->selectionModel();
    QModelIndex cell = modelProduit->index(model->currentIndex().row(), 0);

    QSqlQuery query;
    query.prepare("UPDATE category SET libelle=:libelle,shelf=:shelf WHERE id=:id");
    query.bindValue(":libelle", libelle);
    query.bindValue(":shelf", shelf);
    query.bindValue(":id", cell.data(Qt::DisplayRole).toString());



    if(!query.exec())
        qDebug() << modelProduit->lastError();
    else{
        //modelProduit->submitAll();
    }

    //ui->lineEditModifProd->clear();

    int rows = ui->tableViewProduits->model()->rowCount();

    QModelIndex index = ui->tableViewProduits->model()->index(rows - 1,0);

    ui->tableViewProduits->setCurrentIndex(index);
    ui->tableViewProduits->edit(index);
}

int gestion::getUniqueIdProduit(){
    QSqlQuery query;
    query.prepare("SELECT ifnull(max(no)+1,100) FROM shelf");
    query.exec();

    if(query.next())
    {
        return query.value(0).toInt();
    }else{
        return 1;
    }
}

/**
 * @brief gestion::on_tableViewProduits_clicked
 * @param index
 * Lorsque l'on clique sur la tableviewProduits, on reçoit
 * le champ dans le lineEditModifProd
 */
void gestion::on_tableViewProduits_clicked(const QModelIndex &index)
{
    QModelIndex cell = modelProduit->index(index.row(), 1);
    ui->lineEditModifProd->setText(cell.data(Qt::DisplayRole).toString());
}
