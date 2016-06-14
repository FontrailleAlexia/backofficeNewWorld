#include "moderationarticle.h"
#include "ui_moderationarticle.h"

moderationArticle::moderationArticle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::moderationArticle)
{
    ui->setupUi(this);
}

moderationArticle::~moderationArticle()
{
    delete ui;
}
