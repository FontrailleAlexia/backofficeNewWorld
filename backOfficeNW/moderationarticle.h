#ifndef MODERATIONARTICLE_H
#define MODERATIONARTICLE_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>
#include <QMessageBox>
#include <QSqlRelation>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

namespace Ui {
class moderationArticle;
}

class moderationArticle : public QDialog
{
    Q_OBJECT

public:
    explicit moderationArticle(QWidget *parent = 0);
    ~moderationArticle();

private slots:
   void on_tableView_clicked(const QModelIndex &index);
   void on_comboBoxCheck_activated(int index);

private:
    Ui::moderationArticle *ui;
    QSqlDatabase * maBase;
    QSqlRelationalTableModel * modelLot;

};

#endif // MODERATIONARTICLE_H
