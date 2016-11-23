/********************************************************************************
** Form generated from reading UI file 'productview.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTVIEW_H
#define UI_PRODUCTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_productView
{
public:
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *productView)
    {
        if (productView->objectName().isEmpty())
            productView->setObjectName(QStringLiteral("productView"));
        productView->resize(887, 678);
        textEdit = new QTextEdit(productView);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(30, 260, 225, 350));
        textEdit_2 = new QTextEdit(productView);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(330, 260, 225, 350));
        textEdit_3 = new QTextEdit(productView);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(640, 260, 225, 350));
        pushButton = new QPushButton(productView);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(400, 650, 80, 22));
        label = new QLabel(productView);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 25, 225, 225));
        label_2 = new QLabel(productView);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 25, 225, 225));
        label_3 = new QLabel(productView);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(640, 25, 225, 225));

        retranslateUi(productView);

        QMetaObject::connectSlotsByName(productView);
    } // setupUi

    void retranslateUi(QDialog *productView)
    {
        productView->setWindowTitle(QApplication::translate("productView", "Dialog", 0));
        textEdit->setHtml(QApplication::translate("productView", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">The Cleaner</span></p></body></html>", 0));
        textEdit_2->setHtml(QApplication::translate("productView", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">The Sweeper</span></p></body></html>", 0));
        textEdit_3->setHtml(QApplication::translate("productView", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600;\">The Janitor</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("productView", "Back", 0));
        label->setText(QApplication::translate("productView", "TextLabel", 0));
        label_2->setText(QApplication::translate("productView", "TextLabel", 0));
        label_3->setText(QApplication::translate("productView", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class productView: public Ui_productView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTVIEW_H
