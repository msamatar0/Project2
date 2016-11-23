#include "customerscreen.h"
#include "ui_customerscreen.h"
#include <QMessageBox>

customerScreen::customerScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerScreen)
{
    ui->setupUi(this);
}

customerScreen::~customerScreen()
{
    delete ui;
}

void customerScreen::on_pushButton_products_clicked()
{
    products = new productView(this);
    this->hide();
    products->show();
}

void customerScreen::on_pushButton_requestPamphlet_clicked()
{


   if(record.getHasRecieved(record.getUserIndex())){
       QMessageBox::information(this,"Error","You have already been sent a pamplet");

   }
   else{
       QMessageBox::information(this,"Success","A pamphlet has been sent");
      //write a function to store that the pamphlet is sent,
      //this will become neccessary when new members are added formally
   }
   record.save();
}
