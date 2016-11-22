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
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_adminCustomerList
{
public:
    QTableWidget *customerList_customerList;

    void setupUi(QDialog *adminCustomerList)
    {
        if (adminCustomerList->objectName().isEmpty())
            adminCustomerList->setObjectName(QStringLiteral("adminCustomerList"));
        adminCustomerList->resize(400, 300);
        customerList_customerList = new QTableWidget(adminCustomerList);
        customerList_customerList->setObjectName(QStringLiteral("customerList_customerList"));
        customerList_customerList->setGeometry(QRect(70, 50, 256, 192));

        retranslateUi(adminCustomerList);

        QMetaObject::connectSlotsByName(adminCustomerList);
    } // setupUi

    void retranslateUi(QDialog *adminCustomerList)
    {
        adminCustomerList->setWindowTitle(QApplication::translate("adminCustomerList", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class adminCustomerList: public Ui_adminCustomerList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINCUSTOMERLIST_H
