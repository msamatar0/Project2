/********************************************************************************
** Form generated from reading UI file 'orderform.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERFORM_H
#define UI_ORDERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_orderform
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpinBox *spin3;
    QSpinBox *spin2;
    QSpinBox *spin1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *orderform)
    {
        if (orderform->objectName().isEmpty())
            orderform->setObjectName(QStringLiteral("orderform"));
        orderform->resize(630, 559);
        label = new QLabel(orderform);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 411, 16));
        pushButton = new QPushButton(orderform);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(530, 10, 101, 22));
        pushButton_2 = new QPushButton(orderform);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 190, 80, 21));
        widget = new QWidget(orderform);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 50, 361, 111));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        spin3 = new QSpinBox(widget);
        spin3->setObjectName(QStringLiteral("spin3"));

        gridLayout->addWidget(spin3, 2, 2, 1, 1);

        spin2 = new QSpinBox(widget);
        spin2->setObjectName(QStringLiteral("spin2"));

        gridLayout->addWidget(spin2, 1, 2, 1, 1);

        spin1 = new QSpinBox(widget);
        spin1->setObjectName(QStringLiteral("spin1"));

        gridLayout->addWidget(spin1, 0, 2, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 2);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 2);


        retranslateUi(orderform);

        QMetaObject::connectSlotsByName(orderform);
    } // setupUi

    void retranslateUi(QDialog *orderform)
    {
        orderform->setWindowTitle(QApplication::translate("orderform", "Dialog", 0));
        label->setText(QApplication::translate("orderform", "Select  the model(s) you would like to purchase:", 0));
        pushButton->setText(QApplication::translate("orderform", "Cancel Order", 0));
        pushButton_2->setText(QApplication::translate("orderform", "Place Order", 0));
        label_2->setText(QApplication::translate("orderform", "The Boombra [PBDR-100], $1,999.99 each", 0));
        label_3->setText(QApplication::translate("orderform", "The Gentleman [IBDR-770], $9,999.99 each", 0));
        label_4->setText(QApplication::translate("orderform", "Plan B [ABDR-X3000], $40,000.00 each", 0));
    } // retranslateUi

};

namespace Ui {
    class orderform: public Ui_orderform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERFORM_H
