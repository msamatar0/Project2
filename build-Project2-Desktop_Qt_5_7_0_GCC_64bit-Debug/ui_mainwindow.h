/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdministrator_Login;
    QWidget *centralWidget;
    QLineEdit *login_lineEdit_user;
    QPushButton *login_pushButton_enter;
    QLabel *login_label_prompt;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuOptions;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(301, 326);
        actionAdministrator_Login = new QAction(MainWindow);
        actionAdministrator_Login->setObjectName(QStringLiteral("actionAdministrator_Login"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        login_lineEdit_user = new QLineEdit(centralWidget);
        login_lineEdit_user->setObjectName(QStringLiteral("login_lineEdit_user"));
        login_lineEdit_user->setGeometry(QRect(50, 60, 201, 20));
        login_pushButton_enter = new QPushButton(centralWidget);
        login_pushButton_enter->setObjectName(QStringLiteral("login_pushButton_enter"));
        login_pushButton_enter->setGeometry(QRect(110, 100, 75, 23));
        login_label_prompt = new QLabel(centralWidget);
        login_label_prompt->setObjectName(QStringLiteral("login_label_prompt"));
        login_label_prompt->setGeometry(QRect(80, 30, 171, 16));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 301, 19));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QStringLiteral("menuOptions"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuOptions->menuAction());
        menuOptions->addAction(actionAdministrator_Login);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionAdministrator_Login->setText(QApplication::translate("MainWindow", "Administrator Login", 0));
        login_pushButton_enter->setText(QApplication::translate("MainWindow", "Enter", 0));
        login_label_prompt->setText(QApplication::translate("MainWindow", "Enter your company name: ", 0));
        menuOptions->setTitle(QApplication::translate("MainWindow", "Admin", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
