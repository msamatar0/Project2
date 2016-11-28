#include "concept.h"
#include "ui_concept.h"

concept::concept(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::concept)
{
    ui->setupUi(this);
}

concept::~concept()
{
    delete ui;
}

void concept::on_backButton_clicked()
{
    this->parentWidget()->show();
    this->close();
}
