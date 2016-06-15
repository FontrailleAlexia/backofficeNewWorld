/**
 *  @date 4 septembre 2015
 *  @file gestion.h
 *  @author A.Fontraille
 *  @brief permet de pouvoir gérer les produits et les rayons
 *  @version 1
 */

#ifndef GESTION_H
#define GESTION_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>


/**
 *  @namespace Ui
 *  @class gestion
 */

namespace Ui {
class gestion;
}

/**
 * @brief Avec la classe gestion on retrouve les slots privés ou public
 * afin de gérer les différents rayons et produits
 * on peut donc supprimer, ajouter ou modifier puis tout simplement les voir
 * on peut également gérer la couleur
 */
class gestion : public QDialog
{
    Q_OBJECT
    
public:
    explicit gestion(QWidget *parent = 0);
    ~gestion();
    
private:
    Ui::gestion *ui;
    QSqlDatabase * maBase;
    QSqlTableModel * modelRayon;
    QSqlRelationalTableModel * modelProduit;

private slots:
    void on_pushButtonAddRayons_clicked();
    void on_pushButton_clicked();
    void on_pushButtonSupprimerRayons_clicked();
    void on_pushButtonSupprimerProduits_clicked();
    void on_pushButtonModifierProd_clicked();
    void on_pushButtonModifierRayons_clicked();
    void on_pushButtonAddProduit_clicked();
    void on_tableViewRayons_clicked(const QModelIndex &index);

    void on_tableViewProduits_clicked(const QModelIndex &index);
};

#endif // GESTION_H
