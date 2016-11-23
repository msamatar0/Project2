/********************************************************************************
** Form generated from reading UI file 'admincustomerlist.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINCUSTOMERLIST_H
#define UI_ADMINCUSTOMERLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_adminCustomerList
{
public:
    QTableWidget *customerList_customerList;
    QPushButton *customerList_pushButton_back;

    void setupUi(QDialog *adminCustomerList)
    {
        if (adminCustomerList->objectName().isEmpty())
            adminCustomerList->setObjectName(QStringLiteral("adminCustomerList"));
        adminCustomerList->resize(785, 492);
        customerList_customerList = new QTableWidget(adminCustomerList);
        if (customerList_customerList->columnCount() < 7)
            customerList_customerList->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        customerList_customerList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        customerList_customerList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        customerList_customerList->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        customerList_customerList->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        customerList_customerList->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        customerList_customerList->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        customerList_customerList->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        customerList_customerList->setObjectName(QStringLiteral("customerList_customerList"));
        customerList_customerList->setGeometry(QRect(20, 20, 721, 400));
        customerList_pushButton_back = new QPushButton(adminCustomerList);
        customerList_pushButton_back->setObjectName(QStringLiteral("customerList_pushButton_back"));
        customerList_pushButton_back->setGeometry(QRect(350, 440, 80, 22));

        retranslateUi(adminCustomerList);

        QMetaObject::connectSlotsByName(adminCustomerList);
    } // setupUi

    void retranslateUi(QDialog *adminCustomerList)
    {
        adminCustomerList->setWindowTitle(QApplication::translate("adminCustomerList", "Dialog", 0));
        QTableWidgetItem *___qtablewidgetitem = customerList_customerList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("adminCustomerList", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = customerList_customerList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("adminCustomerList", "Address 1", 0));
        QTableWidgetItem *___qtablewidgetitem2 = customerList_customerList->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("adminCustomerList", "Address 2", 0));
        QTableWidgetItem *___qtablewidgetitem3 = customerList_customerList->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("adminCustomerList", "Customer Rating", 0));
        QTableWidgetItem *___qtablewidgetitem4 = customerList_customerList->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("adminCustomerList", "Customer Designation", 0));
        QTableWidgetItem *___qtablewidgetitem5 = customerList_customerList->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("adminCustomerList", "Key Customer?", 0));
        QTableWidgetItem *___qtablewidgetitem6 = customerList_customerList->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("adminCustomerList", "Received Pamphlet?", 0));
        customerList_pushButton_back->setText(QApplication::translate("adminCustomerList", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class adminCustomerList: public Ui_adminCustomerList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINCUSTOMERLIST_H
