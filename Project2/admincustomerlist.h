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
    explicit adminCustomerList(QWidget *parent = 0);
    adminCustomerList(QWidget *parent, bool keyOnly);
    ~adminCustomerList();

private slots:
    void on_customerList_pushButton_back_clicked();

    void on_pushButton_clicked();

    void on_pushButton_editInfo_clicked();

private:
    addCustomer* editCustomer;
    confirmationWindow *conf;

    Ui::adminCustomerList *ui;
    void initCustomerList();
    void initKeyCustomerList();
    void initOptionPanel();
    void initRecord();

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
