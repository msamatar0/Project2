/********************************************************************************
** Form generated from reading UI file 'adminpanel.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPANEL_H
#define UI_ADMINPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adminpanel
{
public:
    QPushButton *admin_pushButton_customers;
    QPushButton *admin_pushButton_logout;
    QPushButton *admin_pushButton_addCustomer;
    QPushButton *admin_pushButton_deleteCustomer;
    QPushButton *admin_pushButton_keyCustomers;

    void setupUi(QDialog *adminpanel)
    {
        if (adminpanel->objectName().isEmpty())
            adminpanel->setObjectName(QStringLiteral("adminpanel"));
        adminpanel->resize(182, 300);
        admin_pushButton_customers = new QPushButton(adminpanel);
        admin_pushButton_customers->setObjectName(QStringLiteral("admin_pushButton_customers"));
        admin_pushButton_customers->setGeometry(QRect(40, 30, 101, 23));
        admin_pushButton_logout = new QPushButton(adminpanel);
        admin_pushButton_logout->setObjectName(QStringLiteral("admin_pushButton_logout"));
        admin_pushButton_logout->setGeometry(QRect(40, 230, 75, 23));
        admin_pushButton_addCustomer = new QPushButton(adminpanel);
        admin_pushButton_addCustomer->setObjectName(QStringLiteral("admin_pushButton_addCustomer"));
        admin_pushButton_addCustomer->setGeometry(QRect(40, 110, 101, 22));
        admin_pushButton_deleteCustomer = new QPushButton(adminpanel);
        admin_pushButton_deleteCustomer->setObjectName(QStringLiteral("admin_pushButton_deleteCustomer"));
        admin_pushButton_deleteCustomer->setGeometry(QRect(30, 150, 121, 22));
        admin_pushButton_keyCustomers = new QPushButton(adminpanel);
        admin_pushButton_keyCustomers->setObjectName(QStringLiteral("admin_pushButton_keyCustomers"));
        admin_pushButton_keyCustomers->setGeometry(QRect(40, 70, 101, 23));

        retranslateUi(adminpanel);

        QMetaObject::connectSlotsByName(adminpanel);
    } // setupUi

    void retranslateUi(QDialog *adminpanel)
    {
        adminpanel->setWindowTitle(QApplication::translate("adminpanel", "Dialog", 0));
        admin_pushButton_customers->setText(QApplication::translate("adminpanel", "Customer List", 0));
        admin_pushButton_logout->setText(QApplication::translate("adminpanel", "Log Out", 0));
        admin_pushButton_addCustomer->setText(QApplication::translate("adminpanel", "Add Customer", 0));
        admin_pushButton_deleteCustomer->setText(QApplication::translate("adminpanel", "Delete Customer", 0));
        admin_pushButton_keyCustomers->setText(QApplication::translate("adminpanel", "Key Customers", 0));
    } // retranslateUi

};

namespace Ui {
    class adminpanel: public Ui_adminpanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPANEL_H
