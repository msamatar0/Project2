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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *login_lineEdit_user;
    QPushButton *login_pushButton_enter;
    QLabel *login_label_prompt;
    QPushButton *login_pushButton_adminLogin;
    QLabel *label;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(362, 326);
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
        login_pushButton_adminLogin = new QPushButton(centralWidget);
        login_pushButton_adminLogin->setObjectName(QStringLiteral("login_pushButton_adminLogin"));
        login_pushButton_adminLogin->setGeometry(QRect(20, 250, 61, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 220, 131, 21));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        login_pushButton_enter->setText(QApplication::translate("MainWindow", "Enter", 0));
        login_label_prompt->setText(QApplication::translate("MainWindow", "Enter your company name: ", 0));
        login_pushButton_adminLogin->setText(QApplication::translate("MainWindow", "Admin", 0));
        label->setText(QApplication::translate("MainWindow", "OR login as admin:", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
