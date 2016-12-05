#ifndef ADMINCUSTOMERLIST_H
#define ADMINCUSTOMERLIST_H

#include <QDialog>

#include <QTableWidget>
#include "addcustomer.h"

namespace Ui {
class adminCustomerList;
}

class adminCustomerList : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief adminCustomerList default constructor
     * @param parent
     */
    explicit adminCustomerList(QWidget *parent = 0);
    /**
     * @brief adminCustomerList nondefault constructor that sets up window for key members only
     * @param parent
     * @param keyOnly - determines if we want to display key members only
     */
    adminCustomerList(QWidget *parent, bool keyOnly);
    ~adminCustomerList();

private slots:
    /**
     * @brief on_customerList_pushButton_back_clicked handles back button
     */
    void on_customerList_pushButton_back_clicked();
    /**
     * @brief on_pushButton_clicked handles save button
     */
    void on_pushButton_clicked();
    /**
     * @brief on_pushButton_editInfo_clicked handles edit info button
     */
    void on_pushButton_editInfo_clicked();

private:
    /**
     * @brief editCustomer potentially add customer window
     */
    addCustomer* editCustomer;
    /**
     * @brief conf potential confirmation window
     */
    confirmationWindow *conf;

    /**
     * @brief ui base ui for use with QT
     */
    Ui::adminCustomerList *ui;
    /**
     * @brief initCustomerList initializes customer list from records
     */
    void initCustomerList();
    /**
     * @brief initKeyCustomerList initializes customer list for key customers only
     */
    void initKeyCustomerList();
    /**
     * @brief initOptionPanel initializes option panel
     */
    void initOptionPanel();
    /**
     * @brief initRecord initializes record for use with other methods (eg building the table)
     */
    void initRecord();

    //record fields for use with most methods.
    QVector<QString> names;
    QVector<QString> address1;
    QVector<QString> address2;
    QVector<QString> rating;
    QVector<QString> status;
    QVector<bool> key;
    QVector<bool> received;
    QString testimonial;

};

#endif // ADMINCUSTOMERLIST_H
