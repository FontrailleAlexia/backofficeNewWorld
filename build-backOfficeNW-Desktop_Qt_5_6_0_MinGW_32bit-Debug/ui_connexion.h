/********************************************************************************
** Form generated from reading UI file 'connexion.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNEXION_H
#define UI_CONNEXION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_connexion
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_identifiant;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_mdp;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label_statut;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonValider;
    QPushButton *pushButtonFermer;

    void setupUi(QDialog *connexion)
    {
        if (connexion->objectName().isEmpty())
            connexion->setObjectName(QStringLiteral("connexion"));
        connexion->resize(260, 158);
        verticalLayout = new QVBoxLayout(connexion);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(connexion);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_identifiant = new QLineEdit(connexion);
        lineEdit_identifiant->setObjectName(QStringLiteral("lineEdit_identifiant"));

        horizontalLayout->addWidget(lineEdit_identifiant);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(connexion);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_mdp = new QLineEdit(connexion);
        lineEdit_mdp->setObjectName(QStringLiteral("lineEdit_mdp"));
        lineEdit_mdp->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_mdp);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        label_statut = new QLabel(connexion);
        label_statut->setObjectName(QStringLiteral("label_statut"));

        horizontalLayout_4->addWidget(label_statut);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);

        pushButton = new QPushButton(connexion);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButtonValider = new QPushButton(connexion);
        pushButtonValider->setObjectName(QStringLiteral("pushButtonValider"));

        horizontalLayout_3->addWidget(pushButtonValider);

        pushButtonFermer = new QPushButton(connexion);
        pushButtonFermer->setObjectName(QStringLiteral("pushButtonFermer"));

        horizontalLayout_3->addWidget(pushButtonFermer);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(connexion);

        QMetaObject::connectSlotsByName(connexion);
    } // setupUi

    void retranslateUi(QDialog *connexion)
    {
        connexion->setWindowTitle(QApplication::translate("connexion", "connexion", 0));
        label->setText(QApplication::translate("connexion", "Identifiant", 0));
        label_2->setText(QApplication::translate("connexion", "Mot de passe", 0));
        label_statut->setText(QString());
        pushButton->setText(QApplication::translate("connexion", "&Administrateur", 0));
        pushButtonValider->setText(QApplication::translate("connexion", "&Valider", 0));
        pushButtonFermer->setText(QApplication::translate("connexion", "&Fermer", 0));
    } // retranslateUi

};

namespace Ui {
    class connexion: public Ui_connexion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNEXION_H
