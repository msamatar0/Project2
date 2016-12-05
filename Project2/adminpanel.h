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
    /**
     * @brief adminpanel default constructor
     * @param parent
     */
    explicit adminpanel(QWidget *parent = 0);
    ~adminpanel();

private slots:
    /**
     * @brief on_admin_pushButton_customers_clicked handles customer list button
     */
    void on_admin_pushButton_customers_clicked();
    /**
     * @brief on_admin_pushButton_logout_clicked handles logout button
     */
    void on_admin_pushButton_logout_clicked();
    /**
     * @brief on_admin_pushButton_addCustomer_clicked handles add customer button
     */
    void on_admin_pushButton_addCustomer_clicked();
    /**
     * @brief on_admin_pushButton_deleteCustomer_clicked handles delete customer button
     */
    void on_admin_pushButton_deleteCustomer_clicked();
    /**
     * @brief on_admin_pushButton_keyCustomers_clicked handles key customer list button
     */
    void on_admin_pushButton_keyCustomers_clicked();

private:
    /**
     * potential new windows
     */
    Ui::adminpanel *ui;
    adminCustomerList *customerListWindow;
    addCustomer *customerAdd;
    deleteCustomer *customerDelete;

};

#endif // ADMINPANEL_H
