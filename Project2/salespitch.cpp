#include "salespitch.h"
#include "ui_salespitch.h"

salespitch::salespitch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::salespitch)
{
    ui->setupUi(this);
}

salespitch::~salespitch()
{
    delete ui;
}

void salespitch::on_backButton_clicked()
{
    this->parentWidget()->show();
    this->close();
}
