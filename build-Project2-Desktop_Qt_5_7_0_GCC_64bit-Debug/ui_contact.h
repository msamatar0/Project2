/********************************************************************************
** Form generated from reading UI file 'contact.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACT_H
#define UI_CONTACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_contact
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextBrowser *textBrowser;
    QComboBox *comboBox;
    QTextEdit *textEdit;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *contact)
    {
        if (contact->objectName().isEmpty())
            contact->setObjectName(QStringLiteral("contact"));
        contact->resize(601, 518);
        centralwidget = new QWidget(contact);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(320, 390, 171, 51));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 390, 171, 51));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(60, 40, 451, 61));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(90, 130, 361, 22));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(90, 190, 421, 181));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 10, 81, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 170, 111, 16));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 110, 131, 16));
        contact->setCentralWidget(centralwidget);
        menubar = new QMenuBar(contact);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 601, 19));
        contact->setMenuBar(menubar);
        statusbar = new QStatusBar(contact);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        contact->setStatusBar(statusbar);

        retranslateUi(contact);

        QMetaObject::connectSlotsByName(contact);
    } // setupUi

    void retranslateUi(QMainWindow *contact)
    {
        contact->setWindowTitle(QApplication::translate("contact", "MainWindow", 0));
        pushButton->setText(QApplication::translate("contact", "Go back", 0));
        pushButton_2->setText(QApplication::translate("contact", "Send", 0));
        textBrowser->setHtml(QApplication::translate("contact", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Hello valued customer, welcome to the contact page!</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Please choose the type of question and fill out the details listed below.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">If you chose to call us, our number is: 949-888-8888</p></body></html>", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("contact", "More about the product", 0)
         << QApplication::translate("contact", "The shipment", 0)
         << QApplication::translate("contact", "General question", 0)
         << QApplication::translate("contact", "Error within the program", 0)
        );
        label_3->setText(QApplication::translate("contact", "Contact page", 0));
        label_2->setText(QApplication::translate("contact", "Fill out the details:", 0));
        label->setText(QApplication::translate("contact", "Choose the question:", 0));
    } // retranslateUi

};

namespace Ui {
    class contact: public Ui_contact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACT_H
