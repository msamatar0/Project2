/********************************************************************************
** Form generated from reading UI file 'adminlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLOGIN_H
#define UI_ADMINLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adminLogin
{
public:
    QLineEdit *login_lineEdit_username;
    QLineEdit *login_lineEdit_password;
    QLabel *login_label_username;
    QLabel *login_label_password;
    QPushButton *login_pushButton_login;
    QPushButton *login_pushButton_back;

    void setupUi(QDialog *adminLogin)
    {
        if (adminLogin->objectName().isEmpty())
            adminLogin->setObjectName(QStringLiteral("adminLogin"));
        adminLogin->resize(381, 300);
        login_lineEdit_username = new QLineEdit(adminLogin);
        login_lineEdit_username->setObjectName(QStringLiteral("login_lineEdit_username"));
        login_lineEdit_username->setGeometry(QRect(130, 85, 113, 22));
        login_lineEdit_password = new QLineEdit(adminLogin);
        login_lineEdit_password->setObjectName(QStringLiteral("login_lineEdit_password"));
        login_lineEdit_password->setGeometry(QRect(130, 135, 113, 22));
        login_label_username = new QLabel(adminLogin);
        login_label_username->setObjectName(QStringLiteral("login_label_username"));
        login_label_username->setGeometry(QRect(155, 70, 71, 16));
        login_label_password = new QLabel(adminLogin);
        login_label_password->setObjectName(QStringLiteral("login_label_password"));
        login_label_password->setGeometry(QRect(155, 120, 59, 14));
        login_pushButton_login = new QPushButton(adminLogin);
        login_pushButton_login->setObjectName(QStringLiteral("login_pushButton_login"));
        login_pushButton_login->setGeometry(QRect(100, 190, 80, 22));
        login_pushButton_back = new QPushButton(adminLogin);
        login_pushButton_back->setObjectName(QStringLiteral("login_pushButton_back"));
        login_pushButton_back->setGeometry(QRect(195, 190, 80, 22));

        retranslateUi(adminLogin);

        QMetaObject::connectSlotsByName(adminLogin);
    } // setupUi

    void retranslateUi(QDialog *adminLogin)
    {
        adminLogin->setWindowTitle(QApplication::translate("adminLogin", "Dialog", 0));
        login_label_username->setText(QApplication::translate("adminLogin", "Username", 0));
        login_label_password->setText(QApplication::translate("adminLogin", "Password", 0));
        login_pushButton_login->setText(QApplication::translate("adminLogin", "Login", 0));
        login_pushButton_back->setText(QApplication::translate("adminLogin", "Go Back", 0));
    } // retranslateUi

};

namespace Ui {
    class adminLogin: public Ui_adminLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGIN_H
