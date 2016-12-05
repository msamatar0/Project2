#include "addcustomer.h"
#include "ui_addcustomer.h"

class fieldNullException {};

addCustomer::addCustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addCustomer)
{
    ui->setupUi(this);
}

addCustomer::addCustomer(QWidget *parent, QString member, bool edit) :
    QDialog(parent),
    ui(new Ui::addCustomer)
{
    ui->setupUi(this);
    ui->checkBox_pamphlet->hide();
    ui->pushButton_add->setText("Update");

    Record *record = new Record();

    int index;

    QVector<QString> names = record->getNameList();
    QVector<QString> address1 = record->getAddressList1();
    QVector<QString> address2 = record->getAddressList2();
    QVector<bool> isKey = record->getKeyList();

    index = names.indexOf(member);

    ui->lineEdit_name->setText(names.at(index));
    ui->lineEdit_address1->setText(address1.at(index));
    ui->lineEdit_address2->setText(address2.at(index));
    ui->checkBox_key->setChecked(isKey.at(index));

}

addCustomer::addCustomer(QWidget *parent, QString name) :
    QDialog(parent),
    ui(new Ui::addCustomer)
{
    ui->setupUi(this);
    ui->pushButton_add->setText("Register!");

    ui->lineEdit_name->setText(name);
}

addCustomer::~addCustomer()
{
    delete ui;
}

void addCustomer::on_pushButton_add_clicked()
{

        Record *record = new Record();

        try {
            QString name = ui->lineEdit_name->text();
            QString address1 = ui->lineEdit_address1->text();
            QString address2 = ui->lineEdit_address2->text();
            QString rating = ui->comboBox_rating->currentText();
            bool isKey = ui->checkBox_key->isChecked();
            bool received = ui->checkBox_pamphlet->isChecked();

            if(name.length() == 0 || address1.length() == 0 || address2.length() == 0) {
                throw new fieldNullException();
            }

            bool existed = deleteIfExists(name);

            record = new Record();

            record->addCustomer(name, address1, address2, rating, (isKey? "key" : "nice to have"));

            record->save();

            conf = new confirmationWindow(this, existed ? "Member updated!" : "Member added!");
            conf->show();
        }
        catch(fieldNullException *ex) {
            error = new errorWindow(this, "Please enter data in all fields");
            error->show();
        }

}

void addCustomer::on_pushButton_back_clicked()
{
    this->parentWidget()->show();
    this->close();
}

bool addCustomer::deleteIfExists(QString nameStr) {
    Record *record = new Record();

    QVector<QString> name = record->getNameList();
    QVector<QString> addressLine1 = record->getAddressList1();
    QVector<QString> addressLine2 = record->getAddressList2();
    QVector<QString> interest = record->getInterestList();
    QVector<QString> status = record->getStatusList();
    QVector<bool> isKey = record->getKeyList();
    QVector<bool> hasRecieved = record->getRecievedList();

    int index = name.indexOf(nameStr);
    if(index == -1) {
        QTextStream(stdout) << nameStr << " not found!\n";
        return false;
    }
    else {

        QTextStream(stdout) << nameStr << " deleted!\n";

        record->remove(index);

        record->save();
    }
    return true;
}

bool addCustomer::deleteCustomer(QString member) {
    return deleteIfExists(member);
}
