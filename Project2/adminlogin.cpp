#include "adminlogin.h"
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
    QString username = ui->login_label_username->text();
    QString password = ui->login_label_password->text();

    //attempt login function

    bool successful = login(username, password);
    if(successful)
    {
        admin = new adminpanel(this);
        admin->show();
        this->hide();
    }


}

bool adminLogin::login(QString username, QString password) {

    return 1;

}
