#include "deletecustomer.h"
#include "ui_deletecustomer.h"

deleteCustomer::deleteCustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteCustomer)
{
    ui->setupUi(this);
}

deleteCustomer::~deleteCustomer()
{
    delete ui;
}
