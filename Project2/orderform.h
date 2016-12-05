#ifndef ORDERFORM_H
#define ORDERFORM_H

#include <QDialog>
#include "record.h"

namespace Ui {
class orderform;
}

class orderform : public QDialog
{
    Q_OBJECT

public:
    explicit orderform(QWidget *parent = 0);
    ~orderform();

private slots:
    /**
     * @brief on_pushButton_clicked allows user to go back
     */
    void on_pushButton_clicked();

    /**
     * @brief on_pushButton_2_clicked submits the order
     */

    void on_pushButton_2_clicked();

private:
    Ui::orderform *ui;
    /**
     * @brief record contains the data
     */
    Record record;
};

#endif // ORDERFORM_H
