/********************************************************************************
** Form generated from reading UI file 'confirmationwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMATIONWINDOW_H
#define UI_CONFIRMATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_confirmationWindow
{
public:
    QLabel *label_message;
    QPushButton *pushButton;

    void setupUi(QDialog *confirmationWindow)
    {
        if (confirmationWindow->objectName().isEmpty())
            confirmationWindow->setObjectName(QStringLiteral("confirmationWindow"));
        confirmationWindow->resize(188, 143);
        label_message = new QLabel(confirmationWindow);
        label_message->setObjectName(QStringLiteral("label_message"));
        label_message->setGeometry(QRect(8, 30, 171, 51));
        pushButton = new QPushButton(confirmationWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(53, 100, 80, 22));

        retranslateUi(confirmationWindow);

        QMetaObject::connectSlotsByName(confirmationWindow);
    } // setupUi

    void retranslateUi(QDialog *confirmationWindow)
    {
        confirmationWindow->setWindowTitle(QApplication::translate("confirmationWindow", "Dialog", 0));
        label_message->setText(QApplication::translate("confirmationWindow", "<html><head/><body><p align=\"center\">DummyText</p></body></html>", 0));
        pushButton->setText(QApplication::translate("confirmationWindow", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class confirmationWindow: public Ui_confirmationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMATIONWINDOW_H
