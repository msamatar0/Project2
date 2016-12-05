#include "product.h"
#include "ui_product.h"

product::product(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::product)
{
    ui->setupUi(this);
}

product::~product()
{
    delete ui;
}

void product::on_backButton_clicked()
{
    this->parentWidget()->show();
    this->hide();
}
