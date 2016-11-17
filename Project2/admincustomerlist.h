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

private:
    Ui::adminCustomerList *ui;
    void initCustomerList();

};

#endif // ADMINCUSTOMERLIST_H
