#include "customerscreen.h"
#include "ui_customerscreen.h"

customerScreen::customerScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerScreen)
{
    ui->setupUi(this);
}

customerScreen::~customerScreen()
{
    delete ui;
}

void customerScreen::on_pushButton_products_clicked()
{
    products = new productView(this);
    this->hide();
    products->show();
}
