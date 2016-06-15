/**
 *  @date 4 septembre 2015
 *  @file connexion.h
 *  @author A.Fontraille
 *  @brief Permet de pouvoir se connecter ou s'inscrire dans New World
 *  @version 1
 */

#ifndef CONNEXION_H
#define CONNEXION_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QCryptographicHash>
#include "utils.h"

/**
 *  @namespace Ui
 *  @class connexion
 *  @brief avec la classe connexion on retrouve des slots privés et publics
 *  ils permettent de valider ou tout simplement de fermer la fenêtre
 *  nous pouvons aussi gérer la couleur
 */
namespace Ui {
class connexion;
}

class connexion : public QDialog
{
    Q_OBJECT
    
public:
    explicit connexion(QWidget *parent = 0);
    ~connexion();
    
private slots:
    void on_pushButtonFermer_clicked();
    void on_pushButtonValider_clicked();

    void on_pushButton_clicked();

private:
    Ui::connexion *ui;
     QSqlDatabase * maBase;
//static QString Utils::toMd5(QString text);
};

#endif // CONNEXION_H
