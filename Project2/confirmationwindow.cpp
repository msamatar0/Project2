#include "confirmationwindow.h"
#include "ui_confirmationwindow.h"

confirmationWindow::confirmationWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::confirmationWindow)
{
    ui->setupUi(this);
}

confirmationWindow::confirmationWindow(QWidget *parent, QString text) :
    QDialog(parent),
    ui(new Ui::confirmationWindow)
{
    ui->setupUi(this);
    ui->label_message->setText(text);
}

confirmationWindow::~confirmationWindow()
{
    delete ui;
}

void confirmationWindow::on_pushButton_clicked()
{
    this->parentWidget()->show();
    this->close();
}
