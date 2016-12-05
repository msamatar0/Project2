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
    /**
     * @brief deleteCustomer default constructor
     * @param parent
     */
    explicit deleteCustomer(QWidget *parent = 0);
    ~deleteCustomer();

private slots:
    /**
     * @brief on_pushButton_clicked handles delete button
     */
    void on_pushButton_clicked();
    /**
     * @brief on_comboBox_currentIndexChanged handles the changing of the
     * combobox item - changes information regarding it
     * @param arg1 - item switched to
     */
    void on_comboBox_currentIndexChanged(const QString &arg1);
    /**
     * @brief on_pushButton_2_clicked handles back button
     */
    void on_pushButton_2_clicked();

private:
    Ui::deleteCustomer *ui;
    /**
     * @brief initList - populates combobox list with all current customers
     */
    void initList();
    confirmationWindow *conf;
};

#endif // DELETECUSTOMER_H
