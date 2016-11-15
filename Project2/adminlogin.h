#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include <QDialog>

#include "adminpanel.h"

namespace Ui {
class adminLogin;
}

class adminLogin : public QDialog
{
    Q_OBJECT

public:
    explicit adminLogin(QWidget *parent = 0);
    ~adminLogin();

private slots:
    void on_login_pushButton_back_clicked();
    void on_login_pushButton_login_clicked();

private:
    bool login(QString, QString);
    Ui::adminLogin *ui;
    adminpanel *admin;
};

#endif // ADMINLOGIN_H
