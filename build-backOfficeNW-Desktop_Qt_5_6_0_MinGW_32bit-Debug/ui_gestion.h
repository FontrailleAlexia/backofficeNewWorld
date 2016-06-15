/********************************************************************************
** Form generated from reading UI file 'gestion.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_H
#define UI_GESTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion
{
public:
    QVBoxLayout *verticalLayout_6;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QTableView *tableViewRayons;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *pushButtonSupprimerRayons;
    QSpacerItem *horizontalSpacer_17;
    QSpacerItem *horizontalSpacer_18;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QLineEdit *lineEditModifRayons;
    QPushButton *pushButtonModifierRayons;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelNomRayon;
    QLineEdit *lineEditRayons;
    QPushButton *pushButtonAddRayons;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QTableView *tableViewProduits;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButtonSupprimerProduits;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelNomProdModif;
    QLineEdit *lineEditModifProd;
    QLabel *label_3;
    QComboBox *comboBoxModif;
    QPushButton *pushButtonModifierProd;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelNomProd;
    QLineEdit *lineEditProduit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *labelTypeRayons;
    QComboBox *comboBox;
    QPushButton *pushButtonAddProduit;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_12;

    void setupUi(QDialog *gestion)
    {
        if (gestion->objectName().isEmpty())
            gestion->setObjectName(QStringLiteral("gestion"));
        gestion->resize(489, 414);
        verticalLayout_6 = new QVBoxLayout(gestion);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        tabWidget = new QTabWidget(gestion);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_5 = new QVBoxLayout(tab);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(true);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(237, 0, 4, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 100, 103, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(246, 50, 53, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(118, 0, 2, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(158, 0, 2, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(246, 127, 129, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        label_2->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Yu Gothic UI Semibold"));
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setLineWidth(1);
        label_2->setTextFormat(Qt::PlainText);

        verticalLayout_5->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        tableViewRayons = new QTableView(tab);
        tableViewRayons->setObjectName(QStringLiteral("tableViewRayons"));

        horizontalLayout_3->addWidget(tableViewRayons);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));

        horizontalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_15);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_16);

        pushButtonSupprimerRayons = new QPushButton(tab);
        pushButtonSupprimerRayons->setObjectName(QStringLiteral("pushButtonSupprimerRayons"));

        horizontalLayout_10->addWidget(pushButtonSupprimerRayons);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_17);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_18);


        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_7->addWidget(label_4);

        lineEditModifRayons = new QLineEdit(tab);
        lineEditModifRayons->setObjectName(QStringLiteral("lineEditModifRayons"));

        horizontalLayout_7->addWidget(lineEditModifRayons);

        pushButtonModifierRayons = new QPushButton(tab);
        pushButtonModifierRayons->setObjectName(QStringLiteral("pushButtonModifierRayons"));

        horizontalLayout_7->addWidget(pushButtonModifierRayons);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelNomRayon = new QLabel(tab);
        labelNomRayon->setObjectName(QStringLiteral("labelNomRayon"));

        horizontalLayout_2->addWidget(labelNomRayon);

        lineEditRayons = new QLineEdit(tab);
        lineEditRayons->setObjectName(QStringLiteral("lineEditRayons"));

        horizontalLayout_2->addWidget(lineEditRayons);

        pushButtonAddRayons = new QPushButton(tab);
        pushButtonAddRayons->setObjectName(QStringLiteral("pushButtonAddRayons"));

        horizontalLayout_2->addWidget(pushButtonAddRayons);


        verticalLayout_5->addLayout(horizontalLayout_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_8 = new QVBoxLayout(tab_2);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QStringLiteral("Yu Gothic Light"));
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        label->setFont(font1);

        verticalLayout_7->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));

        horizontalLayout->addLayout(verticalLayout_2);

        tableViewProduits = new QTableView(tab_2);
        tableViewProduits->setObjectName(QStringLiteral("tableViewProduits"));

        horizontalLayout->addWidget(tableViewProduits);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));

        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_7->addLayout(horizontalLayout);


        verticalLayout_8->addLayout(verticalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer = new QSpacerItem(37, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);

        pushButtonSupprimerProduits = new QPushButton(tab_2);
        pushButtonSupprimerProduits->setObjectName(QStringLiteral("pushButtonSupprimerProduits"));

        horizontalLayout_9->addWidget(pushButtonSupprimerProduits);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);


        verticalLayout_8->addLayout(horizontalLayout_9);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        labelNomProdModif = new QLabel(tab_2);
        labelNomProdModif->setObjectName(QStringLiteral("labelNomProdModif"));

        horizontalLayout_6->addWidget(labelNomProdModif);

        lineEditModifProd = new QLineEdit(tab_2);
        lineEditModifProd->setObjectName(QStringLiteral("lineEditModifProd"));

        horizontalLayout_6->addWidget(lineEditModifProd);

        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_6->addWidget(label_3);

        comboBoxModif = new QComboBox(tab_2);
        comboBoxModif->setObjectName(QStringLiteral("comboBoxModif"));

        horizontalLayout_6->addWidget(comboBoxModif);

        pushButtonModifierProd = new QPushButton(tab_2);
        pushButtonModifierProd->setObjectName(QStringLiteral("pushButtonModifierProd"));

        horizontalLayout_6->addWidget(pushButtonModifierProd);


        verticalLayout_8->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        labelNomProd = new QLabel(tab_2);
        labelNomProd->setObjectName(QStringLiteral("labelNomProd"));

        horizontalLayout_5->addWidget(labelNomProd);

        lineEditProduit = new QLineEdit(tab_2);
        lineEditProduit->setObjectName(QStringLiteral("lineEditProduit"));

        horizontalLayout_5->addWidget(lineEditProduit);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        labelTypeRayons = new QLabel(tab_2);
        labelTypeRayons->setObjectName(QStringLiteral("labelTypeRayons"));

        horizontalLayout_8->addWidget(labelTypeRayons);

        comboBox = new QComboBox(tab_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_8->addWidget(comboBox);

        pushButtonAddProduit = new QPushButton(tab_2);
        pushButtonAddProduit->setObjectName(QStringLiteral("pushButtonAddProduit"));

        horizontalLayout_8->addWidget(pushButtonAddProduit);


        horizontalLayout_5->addLayout(horizontalLayout_8);


        verticalLayout_8->addLayout(horizontalLayout_5);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_6->addWidget(tabWidget);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_13);

        pushButton = new QPushButton(gestion);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_4->addWidget(pushButton);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_14);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_12);


        verticalLayout_6->addLayout(horizontalLayout_4);


        retranslateUi(gestion);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gestion);
    } // setupUi

    void retranslateUi(QDialog *gestion)
    {
        gestion->setWindowTitle(QApplication::translate("gestion", "Gestion des rayons et des produits", 0));
        label_2->setText(QApplication::translate("gestion", "LISTE DES RAYONS", 0));
        pushButtonSupprimerRayons->setText(QApplication::translate("gestion", "&Supprimer", 0));
        label_4->setText(QApplication::translate("gestion", "Nom du rayon :", 0));
        pushButtonModifierRayons->setText(QApplication::translate("gestion", "&Modifier", 0));
        labelNomRayon->setText(QApplication::translate("gestion", "Nom du rayon :", 0));
        pushButtonAddRayons->setText(QApplication::translate("gestion", "&Ajouter", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("gestion", "Rayons", 0));
        label->setText(QApplication::translate("gestion", "LISTE DES TYPE DE PRODUIT", 0));
        pushButtonSupprimerProduits->setText(QApplication::translate("gestion", "&Supprimer", 0));
        labelNomProdModif->setText(QApplication::translate("gestion", "Nom du type :", 0));
        label_3->setText(QApplication::translate("gestion", "Rayon", 0));
        pushButtonModifierProd->setText(QApplication::translate("gestion", "&Modifier", 0));
        labelNomProd->setText(QApplication::translate("gestion", "Nom du type :", 0));
        labelTypeRayons->setText(QApplication::translate("gestion", "Rayon", 0));
        pushButtonAddProduit->setText(QApplication::translate("gestion", "&Ajouter", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("gestion", "Produits", 0));
        pushButton->setText(QApplication::translate("gestion", "&Fermer", 0));
    } // retranslateUi

};

namespace Ui {
    class gestion: public Ui_gestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_H
