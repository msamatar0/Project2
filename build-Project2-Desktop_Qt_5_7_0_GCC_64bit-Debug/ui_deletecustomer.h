/********************************************************************************
** Form generated from reading UI file 'deletecustomer.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETECUSTOMER_H
#define UI_DELETECUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_deleteCustomer
{
public:
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_address1;
    QLabel *label_address2;
    QLabel *label_rating;
    QLabel *label_key;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *deleteCustomer)
    {
        if (deleteCustomer->objectName().isEmpty())
            deleteCustomer->setObjectName(QStringLiteral("deleteCustomer"));
        deleteCustomer->resize(463, 266);
        comboBox = new QComboBox(deleteCustomer);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(140, 50, 211, 22));
        label = new QLabel(deleteCustomer);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 30, 59, 14));
        label_address1 = new QLabel(deleteCustomer);
        label_address1->setObjectName(QStringLiteral("label_address1"));
        label_address1->setGeometry(QRect(10, 100, 441, 20));
        label_address2 = new QLabel(deleteCustomer);
        label_address2->setObjectName(QStringLiteral("label_address2"));
        label_address2->setGeometry(QRect(10, 120, 441, 20));
        label_rating = new QLabel(deleteCustomer);
        label_rating->setObjectName(QStringLiteral("label_rating"));
        label_rating->setGeometry(QRect(10, 150, 441, 20));
        label_key = new QLabel(deleteCustomer);
        label_key->setObjectName(QStringLiteral("label_key"));
        label_key->setGeometry(QRect(10, 180, 441, 20));
        pushButton = new QPushButton(deleteCustomer);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 230, 111, 22));
        pushButton_2 = new QPushButton(deleteCustomer);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 230, 80, 22));

        retranslateUi(deleteCustomer);

        QMetaObject::connectSlotsByName(deleteCustomer);
    } // setupUi

    void retranslateUi(QDialog *deleteCustomer)
    {
        deleteCustomer->setWindowTitle(QApplication::translate("deleteCustomer", "Dialog", 0));
        label->setText(QApplication::translate("deleteCustomer", "Member", 0));
        label_address1->setText(QApplication::translate("deleteCustomer", "address1", 0));
        label_address2->setText(QApplication::translate("deleteCustomer", "address2", 0));
        label_rating->setText(QApplication::translate("deleteCustomer", "address2", 0));
        label_key->setText(QApplication::translate("deleteCustomer", "address2", 0));
        pushButton->setText(QApplication::translate("deleteCustomer", "Delete Member", 0));
        pushButton_2->setText(QApplication::translate("deleteCustomer", "Go Back", 0));
    } // retranslateUi

};

namespace Ui {
    class deleteCustomer: public Ui_deleteCustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETECUSTOMER_H
