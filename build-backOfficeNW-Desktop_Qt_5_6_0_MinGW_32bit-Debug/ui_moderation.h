/********************************************************************************
** Form generated from reading UI file 'moderation.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODERATION_H
#define UI_MODERATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Moderation
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_identifiant;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_mdp;
    QLabel *label_statut;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButtonFermer;

    void setupUi(QDialog *Moderation)
    {
        if (Moderation->objectName().isEmpty())
            Moderation->setObjectName(QStringLiteral("Moderation"));
        Moderation->resize(383, 204);
        verticalLayout = new QVBoxLayout(Moderation);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(Moderation);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe Print"));
        font.setPointSize(20);
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        groupBox = new QGroupBox(Moderation);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_identifiant = new QLineEdit(groupBox);
        lineEdit_identifiant->setObjectName(QStringLiteral("lineEdit_identifiant"));

        horizontalLayout->addWidget(lineEdit_identifiant);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_mdp = new QLineEdit(groupBox);
        lineEdit_mdp->setObjectName(QStringLiteral("lineEdit_mdp"));
        lineEdit_mdp->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_mdp);


        verticalLayout_2->addLayout(horizontalLayout_2);

        label_statut = new QLabel(groupBox);
        label_statut->setObjectName(QStringLiteral("label_statut"));

        verticalLayout_2->addWidget(label_statut);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        pushButtonFermer = new QPushButton(groupBox);
        pushButtonFermer->setObjectName(QStringLiteral("pushButtonFermer"));

        horizontalLayout_3->addWidget(pushButtonFermer);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout->addWidget(groupBox);


        retranslateUi(Moderation);

        QMetaObject::connectSlotsByName(Moderation);
    } // setupUi

    void retranslateUi(QDialog *Moderation)
    {
        Moderation->setWindowTitle(QApplication::translate("Moderation", "Connexion Administrateur", 0));
        label_3->setText(QApplication::translate("Moderation", "Bienvenue, administrateur", 0));
        groupBox->setTitle(QApplication::translate("Moderation", "C\303\264t\303\251 administrateur", 0));
        label->setText(QApplication::translate("Moderation", "Identifiant", 0));
        label_2->setText(QApplication::translate("Moderation", "Mot de passe", 0));
        label_statut->setText(QString());
        pushButton->setText(QApplication::translate("Moderation", "Valider", 0));
        pushButtonFermer->setText(QApplication::translate("Moderation", "Fermer", 0));
    } // retranslateUi

};

namespace Ui {
    class Moderation: public Ui_Moderation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODERATION_H
