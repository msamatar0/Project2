#include "maintenance.h"
#include "ui_maintenance.h"

maintenance::maintenance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::maintenance)
{
    ui->setupUi(this);
}

maintenance::~maintenance()
{
    delete ui;
}

void maintenance::on_backButton_clicked()
{
    this->parentWidget()->show();
    this->hide();
}
