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
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::orderform *ui;
    Record record;
};

#endif // ORDERFORM_H
