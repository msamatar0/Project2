#include "adminpanel.h"
#include "ui_adminpanel.h"

adminpanel::adminpanel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminpanel)
{
    ui->setupUi(this);
}

adminpanel::~adminpanel()
{
    delete ui;
}

void adminpanel::on_admin_pushButton_customers_clicked()
{
    customerListWindow = new adminCustomerList(this);
    this->hide();
    customerListWindow->show();
}
