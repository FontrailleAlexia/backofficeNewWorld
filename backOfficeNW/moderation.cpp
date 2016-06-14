#include "moderation.h"
#include "ui_moderation.h"
#include <QSqlDatabase>
#include <QMessageBox>
#include "moderationarticle.h"
#include <QSqlQuery>
#include <QDebug>
#include <QCryptographicHash>

Moderation::Moderation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Moderation)
{
    ui->setupUi(this);
    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
    maBase=new QSqlDatabase(db);
    maBase->setHostName("127.0.0.1");
    maBase->setDatabaseName("newWorld2");
    maBase->setUserName("root");
    maBase->setPassword("");
    bool ok = maBase->open();
    if(!ok)
    {
        QMessageBox::warning(this,"New World BackOffice","La connexion à la base de données a échoué\nVeuillez vérifier que le service mysql est lancé sur localhost",QMessageBox::Ok|QMessageBox::Cancel,QMessageBox::Ok);
    }
}

Moderation::~Moderation()
{
    delete ui;
}

void Moderation::on_pushButton_clicked()
{
    QString identifiant=ui->lineEdit_identifiant->text();
    QString mdp = this->toMd5(ui->lineEdit_mdp->text());
    QString texteReq="select count(*) from users where nickname='"+identifiant+"' and password='"+mdp+"'";
    qDebug() << "select count(*) from users where admin=1 and nickname='"+identifiant+"' and password='"+mdp+"'";

    QSqlQuery login(texteReq);

    login.first();
    int req=login.value(0).toInt();

    if(req==0)
    {
        ui->label_statut->setText("Identifiant ou mot de passe incorrect.");
    }
    else
    {
        ui->label_statut->setText("Connexion...");
        moderationArticle *fenetre = new moderationArticle;
        fenetre->show();
        close();
    }
}

void Moderation::on_pushButtonFermer_clicked()
{
    close();
}

QString Moderation::toMd5(QString text){
    return QString("%1").arg(QString(QCryptographicHash::hash(text.toUtf8(),QCryptographicHash::Md5).toHex()));
}
