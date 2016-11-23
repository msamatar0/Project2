#include "productview.h"
#include "ui_productview.h"

productView::productView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::productView)
{
    ui->setupUi(this);
    initImages();
}

productView::~productView()
{
    delete ui;
}

void productView::initImages() {

    QLabel *label1 = ui->label;
    QImage *image1 = new QImage("../Resources/robot1.jpg");
    QImage test1 = image1->scaled(label1->width(), label1->height(), Qt::KeepAspectRatio);
    label1->setPixmap(QPixmap::fromImage(test1));

    QLabel *label3 = ui->label_3;
    QImage *image3 = new QImage("../Resources/robot3.jpg");
    QImage test3 = image3->scaled(label3->width(), label3->height(), Qt::KeepAspectRatio);
    label3->setPixmap(QPixmap::fromImage(test3));


}

void productView::on_pushButton_clicked()
{
    this->parentWidget()->show();
    this->close();
}
