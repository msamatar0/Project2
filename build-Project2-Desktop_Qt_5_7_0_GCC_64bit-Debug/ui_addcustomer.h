/********************************************************************************
** Form generated from reading UI file 'addcustomer.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCUSTOMER_H
#define UI_ADDCUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addCustomer
{
public:
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_address1;
    QLineEdit *lineEdit_address2;
    QCheckBox *checkBox_key;
    QCheckBox *checkBox_pamphlet;
    QPushButton *pushButton_add;
    QPushButton *pushButton_back;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox_rating;
    QLabel *label_4;

    void setupUi(QDialog *addCustomer)
    {
        if (addCustomer->objectName().isEmpty())
            addCustomer->setObjectName(QStringLiteral("addCustomer"));
        addCustomer->resize(272, 345);
        lineEdit_name = new QLineEdit(addCustomer);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(60, 30, 161, 22));
        lineEdit_address1 = new QLineEdit(addCustomer);
        lineEdit_address1->setObjectName(QStringLiteral("lineEdit_address1"));
        lineEdit_address1->setGeometry(QRect(60, 75, 161, 22));
        lineEdit_address2 = new QLineEdit(addCustomer);
        lineEdit_address2->setObjectName(QStringLiteral("lineEdit_address2"));
        lineEdit_address2->setGeometry(QRect(60, 120, 161, 22));
        checkBox_key = new QCheckBox(addCustomer);
        checkBox_key->setObjectName(QStringLiteral("checkBox_key"));
        checkBox_key->setGeometry(QRect(80, 210, 111, 20));
        checkBox_pamphlet = new QCheckBox(addCustomer);
        checkBox_pamphlet->setObjectName(QStringLiteral("checkBox_pamphlet"));
        checkBox_pamphlet->setGeometry(QRect(80, 230, 131, 20));
        pushButton_add = new QPushButton(addCustomer);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setGeometry(QRect(90, 260, 80, 22));
        pushButton_back = new QPushButton(addCustomer);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(90, 290, 80, 22));
        label = new QLabel(addCustomer);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 10, 101, 16));
        label_2 = new QLabel(addCustomer);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 60, 101, 16));
        label_3 = new QLabel(addCustomer);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 100, 101, 16));
        comboBox_rating = new QComboBox(addCustomer);
        comboBox_rating->setObjectName(QStringLiteral("comboBox_rating"));
        comboBox_rating->setGeometry(QRect(60, 170, 161, 22));
        label_4 = new QLabel(addCustomer);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 150, 59, 14));

        retranslateUi(addCustomer);

        QMetaObject::connectSlotsByName(addCustomer);
    } // setupUi

    void retranslateUi(QDialog *addCustomer)
    {
        addCustomer->setWindowTitle(QApplication::translate("addCustomer", "Dialog", 0));
        checkBox_key->setText(QApplication::translate("addCustomer", "Key Customer", 0));
        checkBox_pamphlet->setText(QApplication::translate("addCustomer", "Send Pamphlet", 0));
        pushButton_add->setText(QApplication::translate("addCustomer", "Add!", 0));
        pushButton_back->setText(QApplication::translate("addCustomer", "Go Back", 0));
        label->setText(QApplication::translate("addCustomer", "Business Name", 0));
        label_2->setText(QApplication::translate("addCustomer", "Street Address", 0));
        label_3->setText(QApplication::translate("addCustomer", "City, State, ZIP", 0));
        comboBox_rating->clear();
        comboBox_rating->insertItems(0, QStringList()
         << QApplication::translate("addCustomer", "very interested", 0)
         << QApplication::translate("addCustomer", "somewhat interested", 0)
         << QApplication::translate("addCustomer", "not interested", 0)
         << QApplication::translate("addCustomer", "never call me again", 0)
        );
        label_4->setText(QApplication::translate("addCustomer", "<html><head/><body><p align=\"center\">Rating</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class addCustomer: public Ui_addCustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCUSTOMER_H
