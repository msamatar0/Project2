#include "admincustomerlist.h"
#include "ui_admincustomerlist.h"
#include "record.h"

#define ANDREW_ERROR 1

adminCustomerList::adminCustomerList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminCustomerList)
{


#ifdef ANDREW_ERROR
    QTextStream(stdout) << "before setupUI\n";
#endif

    ui->setupUi(this);

#ifdef ANDREW_ERROR
    QTextStream(stdout) << "after setupUI\n";
#endif


    initCustomerList();
}

adminCustomerList::~adminCustomerList()
{
    delete ui;
}

void adminCustomerList::initCustomerList() {
    //TODO - use a draw method to draw the table rather than all this in a init method


    Record *record = new Record();

    QVector<QString> names = record->getNameList();
    QVector<QString> address1 = record->getAddressList1();
    QVector<QString> address2 = record->getAddressList2();
    QVector<QString> rating = record->getInterestList();
    QVector<QString> status = record->getStatusList();
    QVector<bool> key = record->getKeyList();
    QVector<bool> received = record->getRecievedList();

    //drawCustomerList();

    //prevent user from editting cells from the table view
    ui->customerList_customerList->setSelectionBehavior(QAbstractItemView::SelectRows);

    ui->customerList_customerList->setColumnCount(7);
    ui->customerList_customerList->setRowCount(names.size());

    for(int i = 0; i < names.size(); ++i) {

        ui->customerList_customerList->setItem(i, 0, new QTableWidgetItem(names.at(i)));
        ui->customerList_customerList->setItem(i, 1, new QTableWidgetItem(address1.at(i)));
        ui->customerList_customerList->setItem(i, 2, new QTableWidgetItem(address2.at(i)));
        ui->customerList_customerList->setItem(i, 3, new QTableWidgetItem(rating.at(i)));
        ui->customerList_customerList->setItem(i, 4, new QTableWidgetItem(status.at(i)));

        //When we have key/receieved working properly
        ui->customerList_customerList->setItem(i, 5, new QTableWidgetItem(status.at(i) == "key" ? "Yes" : "No"));
        ui->customerList_customerList->setItem(i, 6, new QTableWidgetItem("yes"));

    }
}

void adminCustomerList::on_customerList_pushButton_back_clicked()
{
    this->parentWidget()->show();
    this->close();
}
