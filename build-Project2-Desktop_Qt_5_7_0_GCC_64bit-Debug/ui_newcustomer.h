/********************************************************************************
** Form generated from reading UI file 'newcustomer.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCUSTOMER_H
#define UI_NEWCUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_newCustomer
{
public:
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_address1;
    QLineEdit *lineEdit_address2;
    QCheckBox *checkBox_pamphlet;
    QPushButton *pushButton_register;
    QPushButton *pushButton_back;

    void setupUi(QDialog *newCustomer)
    {
        if (newCustomer->objectName().isEmpty())
            newCustomer->setObjectName(QStringLiteral("newCustomer"));
        newCustomer->resize(261, 278);
        lineEdit_name = new QLineEdit(newCustomer);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(30, 20, 211, 20));
        lineEdit_address1 = new QLineEdit(newCustomer);
        lineEdit_address1->setObjectName(QStringLiteral("lineEdit_address1"));
        lineEdit_address1->setGeometry(QRect(30, 50, 211, 20));
        lineEdit_address2 = new QLineEdit(newCustomer);
        lineEdit_address2->setObjectName(QStringLiteral("lineEdit_address2"));
        lineEdit_address2->setGeometry(QRect(30, 80, 211, 20));
        checkBox_pamphlet = new QCheckBox(newCustomer);
        checkBox_pamphlet->setObjectName(QStringLiteral("checkBox_pamphlet"));
        checkBox_pamphlet->setGeometry(QRect(30, 110, 211, 31));
        pushButton_register = new QPushButton(newCustomer);
        pushButton_register->setObjectName(QStringLiteral("pushButton_register"));
        pushButton_register->setGeometry(QRect(90, 180, 75, 23));
        pushButton_back = new QPushButton(newCustomer);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(90, 220, 75, 23));

        retranslateUi(newCustomer);

        QMetaObject::connectSlotsByName(newCustomer);
    } // setupUi

    void retranslateUi(QDialog *newCustomer)
    {
        newCustomer->setWindowTitle(QApplication::translate("newCustomer", "Dialog", 0));
        lineEdit_name->setText(QApplication::translate("newCustomer", "Name", 0));
        lineEdit_address1->setText(QApplication::translate("newCustomer", "Street Address", 0));
        lineEdit_address2->setText(QApplication::translate("newCustomer", "City, State, ZIP", 0));
        checkBox_pamphlet->setText(QApplication::translate("newCustomer", "I would like to receive a pamphlet.", 0));
        pushButton_register->setText(QApplication::translate("newCustomer", "Register!", 0));
        pushButton_back->setText(QApplication::translate("newCustomer", "Go Back", 0));
    } // retranslateUi

};

namespace Ui {
    class newCustomer: public Ui_newCustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCUSTOMER_H
