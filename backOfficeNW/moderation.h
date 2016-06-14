#ifndef MODERATION_H
#define MODERATION_H

#include <QDialog>
#include <QSqlDatabase>

namespace Ui {
class Moderation;
}

class Moderation : public QDialog
{
    Q_OBJECT

public:
    explicit Moderation(QWidget *parent = 0);
    ~Moderation();

private slots:
    void on_pushButton_clicked();

    void on_pushButtonFermer_clicked();


private:
    Ui::Moderation *ui;
     QSqlDatabase * maBase;
     QString toMd5(QString text);

};

#endif // MODERATION_H
