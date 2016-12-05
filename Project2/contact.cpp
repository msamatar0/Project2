#include "contact.h"
#include "ui_contact.h"
#include <QMessageBox>

contact::contact(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::contact)
{
    ui->setupUi(this);
}

contact::~contact()
{
    delete ui;
}

void contact::on_pushButton_clicked()
{
    this->parentWidget()->show();
    this->close();
}

void contact::on_pushButton_2_clicked()
{
    QMessageBox::information(this,"Success","Your question has been sent!");
}
