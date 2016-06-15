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
        // Initialisation du TableModel Shelf
        modelRayon = new QSqlTableModel(this, *maBase);
        modelRayon->setTable("shelf");
        modelRayon->setEditStrategy(QSqlTableModel::OnManualSubmit);
        modelRayon->setHeaderData(1, Qt::Horizontal, trUtf8("Nom"));
        modelRayon->select();
        ui->tableViewRayons->setModel(modelRayon);

        // Initialisation du TableModel Produit
        modelProduit = new QSqlRelationalTableModel(this, *maBase);
        modelProduit->setTable("category");
        modelProduit->setEditStrategy(QSqlTableModel::OnManualSubmit);
        modelProduit->setRelation(2, QSqlRelation("shelf", "id", "libelle"));
        modelProduit->setHeaderData(1,Qt::Horizontal, trUtf8("Nom"));
        modelProduit->setHeaderData(2,Qt::Horizontal, trUtf8("Nom du rayon"));
        modelProduit->sort(0, Qt::SortOrder::AscendingOrder);
        modelProduit->select();
        ui->tableViewProduits->setModel(modelProduit);

        //Cacher les colonnes inutiles
        ui->tableViewRayons->hideColumn(0);
        ui->tableViewRayons->hideColumn(2);

        ui->tableViewProduits->hideColumn(0);
        ui->tableViewProduits->hideColumn(3);
        
        //Requête pour remplir la ComboBox des rayons
        QString requete="SELECT * FROM shelf";
        QSqlQuery reqEx(requete);
        while(reqEx.next()){
            int id = reqEx.value(0).toInt();
            QString libelle = reqEx.value(1).toString();

            ui->comboBox->addItem(libelle, id);
            ui->comboBoxModif->addItem(libelle, id);
        }

        //Non editable
        ui->tableViewRayons->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tableViewProduits->setEditTriggers(QAbstractItemView::NoEditTriggers);

        //Selection unique
        ui->tableViewRayons->setSelectionMode(QAbstractItemView::SingleSelection);
        ui->tableViewProduits->setSelectionMode(QAbstractItemView::SingleSelection);

        //Selection de la ligne entière
        ui->tableViewRayons->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tableViewProduits->setSelectionBehavior(QAbstractItemView::SelectRows);
    }

}


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
    QString libelle = ui->lineEditRayons->text();
    QSqlRecord record = modelRayon->record();
    record.setValue(0, "");
    record.setValue(1, libelle);
    
    if(!modelRayon->insertRecord(modelRayon->rowCount(), record))
        qDebug() << modelRayon->lastError();
    else{
        modelRayon->submitAll();
    }

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

    QMessageBox::StandardButton reply = QMessageBox::question(this, "Supprimer", "Voulez-vous supprimez ? ", QMessageBox::Yes | QMessageBox::No);
    if (reply != QMessageBox::Yes)
        return;

    if(!modelRayon->removeRow(ligne) || !modelRayon->submitAll()) {
        modelRayon->revertAll();
    }
}

/**
 * @brief permet de modifier un rayon
 * @return void
 */

void gestion::on_pushButtonModifierRayons_clicked()
{
    QString shelf = ui->comboBox->itemData(ui->comboBox->currentIndex()).toString();
    QString libelle = ui->lineEditModifRayons->text();

    QItemSelectionModel *model = ui->tableViewRayons->selectionModel();
    int row = model->currentIndex().row();

    QModelIndex cell = modelRayon->index(row, 0);

    QSqlQuery query;
    query.prepare("UPDATE shelf SET libelle=:libelle WHERE id=:id");
    query.bindValue(":libelle", libelle);
    query.bindValue(":id", cell.data(Qt::DisplayRole).toString());

    if(!query.exec())
        qDebug() << modelRayon->lastError();

    else{ // Valide la cellule et la reselectionne
        modelRayon->submitAll();
        ui->tableViewRayons->setCurrentIndex(modelRayon->index(row, 1));
    }
}

//////////////////// PRODUITS !!!!!!!!!!!! /////////////////////////

/**
 * @brief permet d'ajouter un produit
 * @return void
 */
void gestion::on_pushButtonAddProduit_clicked()
{
    QString typeId = ui->comboBox->itemData(ui->comboBox->currentIndex()).toString();
    QString libelle = ui->lineEditProduit->text();
    QSqlRecord record=modelProduit->record();

    record.setValue(0,"");
    record.setValue(1, libelle);
    record.setValue(2, typeId);

    if(!modelProduit->insertRecord(modelProduit->rowCount(), record))
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

    QMessageBox::StandardButton reply = QMessageBox::question(this, "Supprimer", "Voulez-vous supprimez ? ", QMessageBox::Yes | QMessageBox::No);
    if (reply != QMessageBox::Yes)
        return;

    if(!modelProduit->removeRow(ligne) || !modelProduit->submitAll()) {
        modelProduit->revertAll();}
}


/**
 * @brief permet de modifier un produit
 * @return void
 */
void gestion::on_pushButtonModifierProd_clicked()
{
    QString shelf = ui->comboBoxModif->itemData(ui->comboBoxModif->currentIndex()).toString();
    QString libelle = ui->lineEditModifProd->text();

    QItemSelectionModel *model = ui->tableViewProduits->selectionModel();
    int row = model->currentIndex().row();

    QModelIndex cell = modelProduit->index(row, 0);

    QSqlQuery query;
    query.prepare("UPDATE category SET libelle=:libelle,shelf=:shelf WHERE id=:id");
    query.bindValue(":libelle", libelle);
    query.bindValue(":shelf", shelf);
    query.bindValue(":id", cell.data(Qt::DisplayRole).toString());

    if(!query.exec())
        qDebug() << modelProduit->lastError();

    else{ // Valide la cellule et la reselectionne
        modelProduit->submitAll();
        ui->tableViewProduits->setCurrentIndex(modelProduit->index(row, 1));
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
    QModelIndex cellId = modelProduit->index(index.row(), 1);
    ui->lineEditModifProd->setText(cellId.data(Qt::DisplayRole).toString());
}
