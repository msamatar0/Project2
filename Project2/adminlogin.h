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
    /**
     * @brief adminLogin default constructor
     * @param parent
     */
    explicit adminLogin(QWidget *parent = 0);
    ~adminLogin();

private slots:
    /**
     * @brief on_login_pushButton_back_clicked handles back button
     */
    void on_login_pushButton_back_clicked();
    /**
     * @brief on_login_pushButton_login_clicked handles login button
     */
    void on_login_pushButton_login_clicked();

private:
    /**
     * @brief login challenges given strings with internal user/pass
     * @return true if successful else flase
     */
    bool login(QString, QString);
    Ui::adminLogin *ui;
    /**
     * @brief admin potential new admin panel
     */
    adminpanel *admin;
};

#endif // ADMINLOGIN_H
