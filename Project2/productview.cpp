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

    ui->textEdit->setReadOnly(1);
    ui->textEdit_2->setReadOnly(1);
    ui->textEdit_3->setReadOnly(1);
    ui->textEdit_4->setReadOnly(1);
    ui->textEdit_5->setReadOnly(1);
    ui->textEdit_6->setReadOnly(1);


    QLabel *label1 = ui->label;
    QImage *image1 = new QImage("../Resources/robot1.jpg");
    QImage test1 = image1->scaled(label1->width(), label1->height(), Qt::KeepAspectRatio);
    label1->setPixmap(QPixmap::fromImage(test1));

    QLabel *label2 = ui->label_2;
    QImage *image2 = new QImage("../Resources/robot2.jpg");
    QImage test2 = image2->scaled(label2->width(), label2->height(), Qt::KeepAspectRatio);
    label2->setPixmap(QPixmap::fromImage(test2));

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
