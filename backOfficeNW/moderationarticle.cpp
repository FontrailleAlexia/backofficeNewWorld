#include "moderationarticle.h"
#include "ui_moderationarticle.h"

moderationArticle::moderationArticle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::moderationArticle)
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
        // Initialisation du TableModel Lot
        modelLot = new QSqlRelationalTableModel(this, *maBase);
        modelLot->setTable("lot");
        modelLot->setEditStrategy(QSqlTableModel::OnManualSubmit);
        modelLot->setRelation(1, QSqlRelation("users", "id", "lastname"));
        modelLot->setRelation(2, QSqlRelation("product", "id", "libelle"));
        modelLot->setRelation(6, QSqlRelation("productionmode", "id", "libelle"));
        modelLot->setRelation(8, QSqlRelation("distributor", "id", "libelle"));

        modelLot->setHeaderData(1, Qt::Horizontal, trUtf8("Nom"));
        modelLot->setHeaderData(2, Qt::Horizontal, trUtf8("Nom du produit"));
        modelLot->setHeaderData(3, Qt::Horizontal, trUtf8("Quantité"));
        modelLot->setHeaderData(4, Qt::Horizontal, trUtf8("Date de récolte"));
        modelLot->setHeaderData(5, Qt::Horizontal, trUtf8("Date de préservation"));
        modelLot->setHeaderData(6, Qt::Horizontal, trUtf8("Mode de production"));
        modelLot->setHeaderData(7, Qt::Horizontal, trUtf8("Prix"));
        modelLot->setHeaderData(8, Qt::Horizontal, trUtf8("Point de vente"));
        modelLot->setHeaderData(9, Qt::Horizontal, trUtf8("Valider"));

        modelLot->sort(0, Qt::SortOrder::AscendingOrder);
        modelLot->select();
        ui->tableView->setModel(modelLot);

        //Cacher les colonnes inutiles
        ui->tableView->hideColumn(0);

        //Non editable, selection unique et selection de la ligne entière
        ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        //Complète le Combbox "Valider"
        ui->comboBoxCheck->addItem("Non valider");
        ui->comboBoxCheck->addItem("Valider");



    }
}

moderationArticle::~moderationArticle()
{
    delete ui;
}

/**
 * @brief gestion::on_tableViewProduits_clicked
 * @param index
 * Lorsque l'on clique sur la tableviewProduits, on reçoit
 * le champ dans le lineEditModifProd
 */
void moderationArticle::on_tableView_clicked(const QModelIndex &index)
{
    QModelIndex cell = modelLot->index(index.row(), 9);
    ui->comboBoxCheck->setCurrentIndex(cell.data(Qt::DisplayRole).toString().toInt());
}

void moderationArticle::on_comboBoxCheck_activated(int index)
{
    QItemSelectionModel *model = ui->tableView->selectionModel();
    int row = model->currentIndex().row();

    QModelIndex cell = modelLot->index(row, 0);

    QSqlQuery query;
    query.prepare("UPDATE lot SET `check`=:check WHERE id=:id");
    query.bindValue(":check", index);
    query.bindValue(":id", cell.data(Qt::DisplayRole).toString().toInt());

    if(!query.exec()){
        qDebug() << modelLot->lastError();

    }else{ // Valide la cellule et la reselectionne
        modelLot->submitAll();
        ui->tableView->setCurrentIndex(modelLot->index(row, 9));
    }
}
