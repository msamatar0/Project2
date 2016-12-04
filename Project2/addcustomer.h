#ifndef ADDCUSTOMER_H
#define ADDCUSTOMER_H

#include <QDialog>
#include "record.h"
#include "confirmationwindow.h"
#include "errorwindow.h"

namespace Ui {
class addCustomer;
}

class addCustomer : public QDialog
{
    Q_OBJECT

public:
    explicit addCustomer(QWidget *parent = 0);
    addCustomer(QWidget *parent, QString member, bool editMode);
    ~addCustomer();
    bool deleteCustomer(QString member);

private slots:
    void on_pushButton_add_clicked();

    void on_pushButton_back_clicked();

private:
    Ui::addCustomer *ui;
    confirmationWindow *conf;
    errorWindow *error;
    bool deleteIfExists(QString);
};

#endif // ADDCUSTOMER_H
