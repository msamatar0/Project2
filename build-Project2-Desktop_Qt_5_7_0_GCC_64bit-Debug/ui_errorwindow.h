/********************************************************************************
** Form generated from reading UI file 'errorwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORWINDOW_H
#define UI_ERRORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_errorWindow
{
public:
    QPushButton *pushButton_OK;
    QLabel *label;

    void setupUi(QDialog *errorWindow)
    {
        if (errorWindow->objectName().isEmpty())
            errorWindow->setObjectName(QStringLiteral("errorWindow"));
        errorWindow->resize(250, 150);
        pushButton_OK = new QPushButton(errorWindow);
        pushButton_OK->setObjectName(QStringLiteral("pushButton_OK"));
        pushButton_OK->setGeometry(QRect(90, 110, 80, 22));
        label = new QLabel(errorWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(8, 23, 231, 31));

        retranslateUi(errorWindow);

        QMetaObject::connectSlotsByName(errorWindow);
    } // setupUi

    void retranslateUi(QDialog *errorWindow)
    {
        errorWindow->setWindowTitle(QApplication::translate("errorWindow", "Dialog", 0));
        pushButton_OK->setText(QApplication::translate("errorWindow", "OK", 0));
        label->setText(QApplication::translate("errorWindow", "<html><head/><body><p align=\"center\">DummyText</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class errorWindow: public Ui_errorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORWINDOW_H
