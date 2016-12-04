#include "deletecustomer.h"
#include "ui_deletecustomer.h"

deleteCustomer::deleteCustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteCustomer)
{
    ui->setupUi(this);

    initList();
}

deleteCustomer::~deleteCustomer()
{
    delete ui;
}

void deleteCustomer::initList()
{
    Record *record = new Record();

    QVector<QString> names = record->getNameList();

    ui->comboBox->addItems(names.toList());
}

void deleteCustomer::on_pushButton_clicked()
{

    Record *record = new Record();

    QString name = ui->comboBox->currentText();

    int index = record->getNameList().indexOf(name);

    if(index != -1) {

        record->remove(index);
        record->save();

        conf = new confirmationWindow(this, "Member Deleted!");
        conf->show();

    }

}

void deleteCustomer::on_comboBox_currentIndexChanged(const QString &arg1)
{
    Record *record = new Record();

    int index = record->getNameList().indexOf(arg1);

    if(index != -1) {

        ui->label_address1->setText(record->getAddressList1().at(index));
        ui->label_address2->setText(record->getAddressList2().at(index));
        ui->label_key->setText(arg1.toUpper() + " is a " + record->getStatusList().at(index).toUpper() + " customer");
        ui->label_rating->setText(arg1.toUpper() + " is " + record->getInterestList().at(index).toUpper() + " in our product");

    }
}

void deleteCustomer::on_pushButton_2_clicked()
{
    this->parentWidget()->show();
    this->close();
}
