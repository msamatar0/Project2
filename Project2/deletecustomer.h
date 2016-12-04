#ifndef DELETECUSTOMER_H
#define DELETECUSTOMER_H

#include <QDialog>

namespace Ui {
class deleteCustomer;
}

class deleteCustomer : public QDialog
{
    Q_OBJECT

public:
    explicit deleteCustomer(QWidget *parent = 0);
    ~deleteCustomer();

private:
    Ui::deleteCustomer *ui;
};

#endif // DELETECUSTOMER_H
