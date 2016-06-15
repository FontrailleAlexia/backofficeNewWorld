/********************************************************************************
** Form generated from reading UI file 'moderationarticle.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODERATIONARTICLE_H
#define UI_MODERATIONARTICLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_moderationArticle
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *comboBoxCheck;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *moderationArticle)
    {
        if (moderationArticle->objectName().isEmpty())
            moderationArticle->setObjectName(QStringLiteral("moderationArticle"));
        moderationArticle->resize(1238, 587);
        verticalLayout = new QVBoxLayout(moderationArticle);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(moderationArticle);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Viner Hand ITC"));
        font.setPointSize(24);
        font.setItalic(true);
        label->setFont(font);

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tableView = new QTableView(moderationArticle);
        tableView->setObjectName(QStringLiteral("tableView"));

        horizontalLayout_2->addWidget(tableView);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(moderationArticle);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        comboBoxCheck = new QComboBox(moderationArticle);
        comboBoxCheck->setObjectName(QStringLiteral("comboBoxCheck"));

        horizontalLayout->addWidget(comboBoxCheck);

        horizontalSpacer = new QSpacerItem(3, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(moderationArticle);

        comboBoxCheck->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(moderationArticle);
    } // setupUi

    void retranslateUi(QDialog *moderationArticle)
    {
        moderationArticle->setWindowTitle(QApplication::translate("moderationArticle", "Mod\303\251ration", 0));
        label->setText(QApplication::translate("moderationArticle", "Bienvenue admin", 0));
        label_2->setText(QApplication::translate("moderationArticle", "Choix", 0));
    } // retranslateUi

};

namespace Ui {
    class moderationArticle: public Ui_moderationArticle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODERATIONARTICLE_H
