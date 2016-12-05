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
    /**
     * @brief default QT constructor
     * @param parent - calling node
     */
    explicit addCustomer(QWidget *parent = 0);
    /**
     * @brief addCustomer nondefault constructor that accepts a QString and edits existing member
     * @param parent - calling node
     * @param member - name of member to edit
     */
    addCustomer(QWidget *parent, QString member);
    ~addCustomer();
    /**
     * @brief deleteCustomer - deletes a customer from the database
     * @param member - member to delete from database
     * @return true if delete was successful, false otherwise
     */
    bool deleteCustomer(QString member);

private slots:
    /**
     * @brief on_pushButton_add_clicked handles the add button
     */
    void on_pushButton_add_clicked();
    /**
     * @brief on_pushButton_back_clicked handles the back button
     */
    void on_pushButton_back_clicked();

private:
    /**
     * @brief ui base ui
     */
    Ui::addCustomer *ui;
    /**
     * @brief conf potentially called confirmation window
     */
    confirmationWindow *conf;
    /**
     * @brief error potentially called error window
     */
    errorWindow *error;
    /**
     * @brief deleteIfExists determines if a string exists in names of record then deletes it
     * @return true if successful else false
     */
    bool deleteIfExists(QString);
};

#endif // ADDCUSTOMER_H
