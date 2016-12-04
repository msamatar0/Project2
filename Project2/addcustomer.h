#ifndef ADDCUSTOMER_H
#define ADDCUSTOMER_H

#include <QDialog>
#include "record.h"
#include "confirmationwindow.h"

namespace Ui {
class addCustomer;
}

class addCustomer : public QDialog
{
    Q_OBJECT

public:
    explicit addCustomer(QWidget *parent = 0);
    ~addCustomer();

private slots:
    void on_pushButton_add_clicked();

    void on_pushButton_back_clicked();

private:
    Ui::addCustomer *ui;
    confirmationWindow *conf;
};

#endif // ADDCUSTOMER_H
