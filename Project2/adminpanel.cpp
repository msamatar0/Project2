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

void adminpanel::on_admin_pushButton_logout_clicked()
{
    this->parentWidget()->show();
    this->close();
}

void adminpanel::on_admin_pushButton_addCustomer_clicked()
{
    customerAdd = new addCustomer(this);
    customerAdd->show();
    this->hide();
}

void adminpanel::on_admin_pushButton_deleteCustomer_clicked()
{
    customerDelete = new deleteCustomer(this);
    customerDelete->show();
    this->hide();
}

void adminpanel::on_admin_pushButton_keyCustomers_clicked()
{
    customerListWindow = new adminCustomerList(this, true);
    this->hide();
    customerListWindow->show();
}
