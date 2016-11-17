#include "admincustomerlist.h"
#include "ui_admincustomerlist.h"

adminCustomerList::adminCustomerList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminCustomerList)
{
    ui->setupUi(this);
    initCustomerList();
}

adminCustomerList::~adminCustomerList()
{
    delete ui;
}

void adminCustomerList::initCustomerList() {
    ui->customerList_customerList->setColumnCount(2);
    ui->customerList_customerList->setRowCount(10);
    ui->customerList_customerList->setItem(0, 1, new QTableWidgetItem("Hello"));
}
