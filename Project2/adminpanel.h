#ifndef ADMINPANEL_H
#define ADMINPANEL_H

#include <QDialog>
#include "admincustomerlist.h"
#include "addcustomer.h"
#include "deletecustomer.h"

namespace Ui {
class adminpanel;
}

class adminpanel : public QDialog
{
    Q_OBJECT

public:
    explicit adminpanel(QWidget *parent = 0);
    ~adminpanel();

private slots:
    void on_admin_pushButton_customers_clicked();

    void on_admin_pushButton_logout_clicked();

    void on_admin_pushButton_addCustomer_clicked();

    void on_admin_pushButton_deleteCustomer_clicked();

    void on_admin_pushButton_keyCustomers_clicked();

private:
    Ui::adminpanel *ui;
    adminCustomerList *customerListWindow;
    addCustomer *customerAdd;
    deleteCustomer *customerDelete;

};

#endif // ADMINPANEL_H
