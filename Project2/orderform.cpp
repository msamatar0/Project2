#include "orderform.h"
#include "ui_orderform.h"
#include <QMessageBox>

orderform::orderform(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::orderform)
{
    ui->setupUi(this);
}

orderform::~orderform()
{
    delete ui;
}

void orderform::on_pushButton_clicked()
{
   this->parentWidget()->show();
   this->close();
}

void orderform::on_pushButton_2_clicked()
{
    double total;

    total = (ui->spin1->value()*1999.99) + (ui->spin2->value()*9999.99) + (ui->spin3->value()*40000);
    if(total==0){
        QMessageBox::warning(this,"Error","You have not selected any items");
    }
    else{
        QMessageBox::information(this,"Order Placed",
                                 "Your total is: $" + QString::number(total) + "\nYour order, as well as your bill will be sent"
                                                              " to:\n\n" + record.getAddress(record.getUserIndex()));
        this->parentWidget()->show();
        this->close();

    }



}
