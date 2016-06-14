/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Quitter;
    QAction *action_Moderer_les_produits;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonConnexion;
    QMenuBar *menuBar;
    QMenu *menu_Fichier;
    QMenu *menu_Moderation;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(113, 127);
        QIcon icon;
        icon.addFile(QStringLiteral("url.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action_Quitter = new QAction(MainWindow);
        action_Quitter->setObjectName(QStringLiteral("action_Quitter"));
        action_Moderer_les_produits = new QAction(MainWindow);
        action_Moderer_les_produits->setObjectName(QStringLiteral("action_Moderer_les_produits"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButtonConnexion = new QPushButton(groupBox);
        pushButtonConnexion->setObjectName(QStringLiteral("pushButtonConnexion"));

        verticalLayout->addWidget(pushButtonConnexion);


        horizontalLayout->addWidget(groupBox);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 113, 21));
        menu_Fichier = new QMenu(menuBar);
        menu_Fichier->setObjectName(QStringLiteral("menu_Fichier"));
        menu_Moderation = new QMenu(menuBar);
        menu_Moderation->setObjectName(QStringLiteral("menu_Moderation"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_Fichier->menuAction());
        menuBar->addAction(menu_Moderation->menuAction());
        menu_Fichier->addAction(action_Quitter);
        menu_Moderation->addAction(action_Moderer_les_produits);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Back office new world", 0));
        action_Quitter->setText(QApplication::translate("MainWindow", "&Quitter", 0));
        action_Moderer_les_produits->setText(QApplication::translate("MainWindow", "&Moderer les produits", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Identification", 0));
        pushButtonConnexion->setText(QApplication::translate("MainWindow", "Connexion", 0));
        menu_Fichier->setTitle(QApplication::translate("MainWindow", "&Fichier", 0));
        menu_Moderation->setTitle(QApplication::translate("MainWindow", "&Moderation", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
