#ifndef ADMINCUSTOMERLIST_H
#define ADMINCUSTOMERLIST_H

#include <QDialog>

#include <QTableWidget>

namespace Ui {
class adminCustomerList;
}

class adminCustomerList : public QDialog
{
    Q_OBJECT

public:
    explicit adminCustomerList(QWidget *parent = 0);
    ~adminCustomerList();

private slots:
    void on_customerList_pushButton_back_clicked();

private:
    Ui::adminCustomerList *ui;
    void initCustomerList();

};

#endif // ADMINCUSTOMERLIST_H
