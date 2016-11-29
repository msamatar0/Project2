#ifndef NEWCUSTOMER_H
#define NEWCUSTOMER_H

#include <QDialog>

namespace Ui {
class newCustomer;
}

class newCustomer : public QDialog
{
    Q_OBJECT

public:
    explicit newCustomer(QWidget *parent = 0);
    ~newCustomer();

private:
    Ui::newCustomer *ui;
};

#endif // NEWCUSTOMER_H
