/**
 * @date 4 septembre 2015
 * @version 1
 * @file mainwindow.h
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextCodec>

namespace Ui {
class MainWindow;
}


/**
 * @brief on peut retrouver des slots privés et publics
 * qui permettent de quitter le programme et de se connecter
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_action_Quitter_triggered();
    void on_pushButtonConnexion_clicked();

    void on_action_Moderer_les_produits_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
