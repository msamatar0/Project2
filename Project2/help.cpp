#include "help.h"
#include "ui_help.h"

help::help(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::help)
{
    ui->setupUi(this);
}

help::~help()
{
    delete ui;
}

void help::on_pushButton_clicked()
{
    //customer = new customerScreen(this);
    //this->hide();
    //customer->show();
    this->parentWidget()->show();
    this->close();
}
