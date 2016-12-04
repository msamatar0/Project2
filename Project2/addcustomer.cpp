#include "addcustomer.h"
#include "ui_addcustomer.h"

addCustomer::addCustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addCustomer)
{
    ui->setupUi(this);
}

addCustomer::~addCustomer()
{
    delete ui;
}

void addCustomer::on_pushButton_add_clicked()
{
    Record *record = new Record();

    QString name = ui->lineEdit_name->text();
    QString address1 = ui->lineEdit_address1->text();
    QString address2 = ui->lineEdit_address2->text();
    bool isKey = ui->checkBox_key->isChecked();
    bool received = ui->checkBox_pamphlet->isChecked();

    record->addCustomer(name, address1, address2, "somewhat interested", (isKey? "key" : "nice to have"));

    record->save();

    conf = new confirmationWindow(this, "Member Added!");
    conf->show();

}

void addCustomer::on_pushButton_back_clicked()
{
    this->parentWidget()->show();
    this->close();
}
