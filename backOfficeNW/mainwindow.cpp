/**
 *  @file mainwindow.cpp
 *  @author A.Fontraille
 *  @date 4 septembre 2015
 *  @version 1
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connexion.h"
#include <QMessageBox>
#include <QSqlRecord>
#include <QTextCodec>
#include <QString>
#include <QDebug>
#include <QPalette>
#include <QColor>
#include <QColorDialog>
#include <QDialog>
#include <QSqlQuery>
#include <QObject>
#include "moderation.h"

/**
 * @brief MainWindow::MainWindow
 * @param parent
 */

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //construit un interface
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * @brief permet de quitter le programme
 * @return void
 */
void MainWindow::on_action_Quitter_triggered()
{
    close();
}

/**
 * @brief permet d'ouvrir une nouvelle fenêtre après la fenêtre connexion
 * @return void
 */
void MainWindow::on_pushButtonConnexion_clicked()
{
    connexion *fenetre = new connexion();
    fenetre->show();
    close();
}

void MainWindow::on_action_Moderer_les_produits_triggered()
{
    Moderation *fenetre = new Moderation();
    fenetre->show();
    close();
}
