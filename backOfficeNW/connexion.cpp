/**
 *  @file connexion.cpp
 *  @author A.Fontraille
 *  @brief Permet de pouvoir se connecter ou s'inscrire dans New World
 *  @bug ne permet pas vraiment de s'inscrire, seulement de se connecter
 *  identifiant : afontraille
 *  mdp : 123
 *  @date 4 septembre 2015
 *  @version 1
 */

#include "connexion.h"
#include "ui_connexion.h"
#include "gestion.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>
#include "moderation.h"


/**
 * @brief permet de pouvoir se connecter à la base de données
 * Si l'identifiant de la base de données ou le mdp est incorrect
 * Alors il sera impossible de se connecter
 * et un message d'erreur apparaitra
 * @param parent
 */
connexion::connexion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::connexion)
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
    }else{

    }

}

/**
 * @brief connexion::~connexion
 */
connexion::~connexion()
{
    delete ui;
}

/**
 * @brief Avec ce bouton on pourra donc fermer le programme
 * @return void
 */
void connexion::on_pushButtonFermer_clicked()
{
    close();
}

/**
 * @brief Pouvoir se connecter avec les bons identifiants et valider
 * si un mauvais identifiant est identifié, alors un msg d'erreur apparait
 * @return void
 */
void connexion::on_pushButtonValider_clicked()
{
    QString identifiant=ui->lineEdit_identifiant->text();

    QString mdp = Utils::toMd5(ui->lineEdit_mdp->text());
    QString texteReq="select count(*) from users where nickname='"+identifiant+"' and password='"+mdp+"'";
    qDebug()<<texteReq;
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
        gestion *fenetre = new gestion;
        fenetre->show();
        close();
    }
}

void connexion::on_pushButton_clicked()
{
    Moderation *fenetre = new Moderation();
    fenetre->show();
}