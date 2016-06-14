/**
 *  @file main.cpp
 *  @author A.Fontraille
 *  @date 4 septembre 2015
 *  @version 1
 *  @brief main est obligatoire dans tout les programmes c++
 */

#include <QApplication>
#include "mainwindow.h"
#include <QtCore/QCoreApplication>
#include <QtSQL>

/**
 * @fn int main(int argc, char *argv[])
 * @brief permet de gérer toutes les fonctionnalités avec main
 * main est obligatoire dans tout les programmes c++
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
    //QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    //QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    //modelProduit->setHeaderData(0, Qt::Horizontal, trUtf8("Identifiant"));
}
