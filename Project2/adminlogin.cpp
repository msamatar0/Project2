#include "adminlogin.h"
#include <QMessageBox>
#include <QDebug>
#include "ui_adminlogin.h"

adminLogin::adminLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminLogin)
{
    ui->setupUi(this);
}

adminLogin::~adminLogin()
{
    delete ui;
}

void adminLogin::on_login_pushButton_back_clicked()
{
    this->parentWidget()->show();
    this->close();
}

void adminLogin::on_login_pushButton_login_clicked()
{
    QString username = ui->login_lineEdit_username->text();
    QString password = ui->login_lineEdit_password->text();

    //attempt login function

    if(login(username,password))
    {
        QMessageBox::information(this,"Success","Welcome, Administrator");
        admin = new adminpanel(this);
        admin->show();
        this->hide();
    }
    else{
        QMessageBox::warning(this,"Error","Incorrect username or pasword! Please try agin.");
    }


}

bool adminLogin::login(QString username, QString password) {
    QString correctName = "admin";
    QString correctPassword = "password";
    qDebug() << username << endl << correctName << endl;
    qDebug() << password << endl << correctPassword << endl;

    return (username==correctName && password==correctPassword);

}
