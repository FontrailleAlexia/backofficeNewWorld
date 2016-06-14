#ifndef MODERATIONARTICLE_H
#define MODERATIONARTICLE_H

#include <QDialog>

namespace Ui {
class moderationArticle;
}

class moderationArticle : public QDialog
{
    Q_OBJECT

public:
    explicit moderationArticle(QWidget *parent = 0);
    ~moderationArticle();

private:
    Ui::moderationArticle *ui;
};

#endif // MODERATIONARTICLE_H
