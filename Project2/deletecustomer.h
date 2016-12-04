#ifndef DELETECUSTOMER_H
#define DELETECUSTOMER_H

#include <QDialog>
#include "record.h"
#include "confirmationwindow.h"

namespace Ui {
class deleteCustomer;
}

class deleteCustomer : public QDialog
{
    Q_OBJECT

public:
    explicit deleteCustomer(QWidget *parent = 0);
    ~deleteCustomer();

private slots:
    void on_pushButton_clicked();

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_pushButton_2_clicked();

private:
    Ui::deleteCustomer *ui;
    void initList();
    confirmationWindow *conf;
};

#endif // DELETECUSTOMER_H
