/********************************************************************************
** Form generated from reading UI file 'customerscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERSCREEN_H
#define UI_CUSTOMERSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_customerScreen
{
public:
    QPushButton *pushButton_orderNow;
    QPushButton *pushButton_requestPamphlet;
    QPushButton *pushButton_rating;
    QPushButton *pushButton_testimonial;
    QPushButton *pushButton_contact;
    QPushButton *pushButton_guarantee;
    QPushButton *pushButton_products;
    QPushButton *pushButton_concept;
    QPushButton *pushButton_pitch;
    QPushButton *pushButton_help;

    void setupUi(QDialog *customerScreen)
    {
        if (customerScreen->objectName().isEmpty())
            customerScreen->setObjectName(QStringLiteral("customerScreen"));
        customerScreen->resize(403, 330);
        pushButton_orderNow = new QPushButton(customerScreen);
        pushButton_orderNow->setObjectName(QStringLiteral("pushButton_orderNow"));
        pushButton_orderNow->setGeometry(QRect(60, 80, 75, 23));
        pushButton_requestPamphlet = new QPushButton(customerScreen);
        pushButton_requestPamphlet->setObjectName(QStringLiteral("pushButton_requestPamphlet"));
        pushButton_requestPamphlet->setGeometry(QRect(40, 110, 111, 23));
        pushButton_rating = new QPushButton(customerScreen);
        pushButton_rating->setObjectName(QStringLiteral("pushButton_rating"));
        pushButton_rating->setGeometry(QRect(40, 140, 111, 23));
        pushButton_testimonial = new QPushButton(customerScreen);
        pushButton_testimonial->setObjectName(QStringLiteral("pushButton_testimonial"));
        pushButton_testimonial->setGeometry(QRect(30, 170, 131, 23));
        pushButton_contact = new QPushButton(customerScreen);
        pushButton_contact->setObjectName(QStringLiteral("pushButton_contact"));
        pushButton_contact->setGeometry(QRect(60, 200, 75, 23));
        pushButton_guarantee = new QPushButton(customerScreen);
        pushButton_guarantee->setObjectName(QStringLiteral("pushButton_guarantee"));
        pushButton_guarantee->setGeometry(QRect(230, 80, 111, 23));
        pushButton_products = new QPushButton(customerScreen);
        pushButton_products->setObjectName(QStringLiteral("pushButton_products"));
        pushButton_products->setGeometry(QRect(250, 110, 75, 23));
        pushButton_concept = new QPushButton(customerScreen);
        pushButton_concept->setObjectName(QStringLiteral("pushButton_concept"));
        pushButton_concept->setGeometry(QRect(240, 140, 91, 23));
        pushButton_pitch = new QPushButton(customerScreen);
        pushButton_pitch->setObjectName(QStringLiteral("pushButton_pitch"));
        pushButton_pitch->setGeometry(QRect(250, 170, 75, 23));
        pushButton_help = new QPushButton(customerScreen);
        pushButton_help->setObjectName(QStringLiteral("pushButton_help"));
        pushButton_help->setGeometry(QRect(20, 10, 75, 23));

        retranslateUi(customerScreen);

        QMetaObject::connectSlotsByName(customerScreen);
    } // setupUi

    void retranslateUi(QDialog *customerScreen)
    {
        customerScreen->setWindowTitle(QApplication::translate("customerScreen", "Dialog", 0));
        pushButton_orderNow->setText(QApplication::translate("customerScreen", "ORDER NOW", 0));
        pushButton_requestPamphlet->setText(QApplication::translate("customerScreen", "Request Pamphlet", 0));
        pushButton_rating->setText(QApplication::translate("customerScreen", "Rate our Product", 0));
        pushButton_testimonial->setText(QApplication::translate("customerScreen", "See Customers!", 0));
        pushButton_contact->setText(QApplication::translate("customerScreen", "Contact Us!", 0));
        pushButton_guarantee->setText(QApplication::translate("customerScreen", "See our Guarantee", 0));
        pushButton_products->setText(QApplication::translate("customerScreen", "Products", 0));
        pushButton_concept->setText(QApplication::translate("customerScreen", "How It Works", 0));
        pushButton_pitch->setText(QApplication::translate("customerScreen", "Our Product", 0));
        pushButton_help->setText(QApplication::translate("customerScreen", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class customerScreen: public Ui_customerScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERSCREEN_H
