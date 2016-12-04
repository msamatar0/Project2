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

private slots:
    void on_customerList_pushButton_back_clicked();

    void on_pushButton_clicked();

private:
    Ui::adminCustomerList *ui;
    void initCustomerList();
    void initOptionPanel();
    void initRecord();

    QVector<QString> names;
    QVector<QString> address1;
    QVector<QString> address2;
    QVector<QString> rating;
    QVector<QString> status;
    QVector<bool> key;
    QVector<bool> received;
    QString testimonial;

};

#endif // ADMINCUSTOMERLIST_H
