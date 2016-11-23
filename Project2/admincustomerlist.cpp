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

    initRecord();


    initCustomerList();
    initOptionPanel();
}

adminCustomerList::~adminCustomerList()
{
    delete ui;
}

void adminCustomerList::initRecord() {

    Record *record = new Record();

    names = record->getNameList();
    address1 = record->getAddressList1();
    address2 = record->getAddressList2();
    rating = record->getInterestList();
    status = record->getStatusList();
    key = record->getKeyList();
    received = record->getRecievedList();
    testimonial = record->getTestimonial();

}

void adminCustomerList::initCustomerList() {
    //TODO - use a draw method to draw the table rather than all this in a init method

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
        ui->customerList_customerList->setItem(i, 6, new QTableWidgetItem(received.at(i)));

    }
}

void adminCustomerList::on_customerList_pushButton_back_clicked()
{
    this->parentWidget()->show();
    this->close();
}

void adminCustomerList::initOptionPanel() {

    ui->comboBox_customer->addItems(names.toList());

}

void adminCustomerList::on_pushButton_clicked()
{
    //initialize variables to be used from GUI
    QString name = ui->comboBox_customer->currentText();
    int index = ui->comboBox_customer->currentIndex();
    bool changed = 0;

    //handles check/nocheck
    if(ui->radioButton_no->isChecked() ) {
        QTextStream(stdout) << "no is checked\n";
        status[index] = "nice to have";
        changed = 1;

    }
    else if (ui->radioButton_yes->isChecked()) {
        QTextStream(stdout) << "yes is checked\n";
        status[index] = "key";
        changed = 1;
    }

    //only save new record if something was changed
    if(changed) {
        Record *r = new Record(names, address1, address2, rating, status, key, received, testimonial);
        r->save();
        this->initRecord();
        this->initCustomerList();
    }

}
