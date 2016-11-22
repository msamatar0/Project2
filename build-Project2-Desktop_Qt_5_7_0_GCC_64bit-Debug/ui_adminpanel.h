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

    void setupUi(QDialog *adminpanel)
    {
        if (adminpanel->objectName().isEmpty())
            adminpanel->setObjectName(QStringLiteral("adminpanel"));
        adminpanel->resize(400, 300);
        admin_pushButton_customers = new QPushButton(adminpanel);
        admin_pushButton_customers->setObjectName(QStringLiteral("admin_pushButton_customers"));
        admin_pushButton_customers->setGeometry(QRect(50, 50, 75, 23));

        retranslateUi(adminpanel);

        QMetaObject::connectSlotsByName(adminpanel);
    } // setupUi

    void retranslateUi(QDialog *adminpanel)
    {
        adminpanel->setWindowTitle(QApplication::translate("adminpanel", "Dialog", 0));
        admin_pushButton_customers->setText(QApplication::translate("adminpanel", "Customers", 0));
    } // retranslateUi

};

namespace Ui {
    class adminpanel: public Ui_adminpanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPANEL_H
