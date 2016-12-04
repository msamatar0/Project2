#include "errorwindow.h"
#include "ui_errorwindow.h"

errorWindow::errorWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::errorWindow)
{
    ui->setupUi(this);
}

errorWindow::errorWindow(QWidget *parent, QString text) :
    QDialog(parent),
    ui(new Ui::errorWindow)
{
    ui->setupUi(this);
    ui->label->setText(text);
}

errorWindow::~errorWindow()
{
    delete ui;
}

void errorWindow::on_pushButton_OK_clicked()
{
    this->parentWidget()->show();
    this->close();
}
