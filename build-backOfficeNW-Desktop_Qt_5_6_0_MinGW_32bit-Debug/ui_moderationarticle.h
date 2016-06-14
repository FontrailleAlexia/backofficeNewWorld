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
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
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
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;

    void setupUi(QDialog *moderationArticle)
    {
        if (moderationArticle->objectName().isEmpty())
            moderationArticle->setObjectName(QStringLiteral("moderationArticle"));
        moderationArticle->resize(283, 301);
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
        pushButton = new QPushButton(moderationArticle);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(moderationArticle);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(moderationArticle);

        QMetaObject::connectSlotsByName(moderationArticle);
    } // setupUi

    void retranslateUi(QDialog *moderationArticle)
    {
        moderationArticle->setWindowTitle(QApplication::translate("moderationArticle", "Mod\303\251ration", 0));
        label->setText(QApplication::translate("moderationArticle", "Bienvenue admin", 0));
        pushButton->setText(QApplication::translate("moderationArticle", "&Valider", 0));
        pushButton_2->setText(QApplication::translate("moderationArticle", "&Supprimer", 0));
    } // retranslateUi

};

namespace Ui {
    class moderationArticle: public Ui_moderationArticle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODERATIONARTICLE_H
