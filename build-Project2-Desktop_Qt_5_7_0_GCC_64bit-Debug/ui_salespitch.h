/********************************************************************************
** Form generated from reading UI file 'salespitch.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALESPITCH_H
#define UI_SALESPITCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_salespitch
{
public:
    QLabel *pitchLabel;
    QPushButton *backButton;

    void setupUi(QDialog *salespitch)
    {
        if (salespitch->objectName().isEmpty())
            salespitch->setObjectName(QStringLiteral("salespitch"));
        salespitch->resize(400, 300);
        pitchLabel = new QLabel(salespitch);
        pitchLabel->setObjectName(QStringLiteral("pitchLabel"));
        pitchLabel->setGeometry(QRect(50, 30, 301, 191));
        QFont font;
        font.setPointSize(10);
        pitchLabel->setFont(font);
        pitchLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        pitchLabel->setWordWrap(true);
        backButton = new QPushButton(salespitch);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(50, 250, 80, 21));

        retranslateUi(salespitch);

        QMetaObject::connectSlotsByName(salespitch);
    } // setupUi

    void retranslateUi(QDialog *salespitch)
    {
        salespitch->setWindowTitle(QApplication::translate("salespitch", "Dialog", 0));
        pitchLabel->setText(QApplication::translate("salespitch", "iRobotsTheBomb is a company that specializes in robots that detect and dispose of explosive devices. Here at iRobotsTheBomb, your security (and convenience) is our primary goal.", 0));
        backButton->setText(QApplication::translate("salespitch", "Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class salespitch: public Ui_salespitch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALESPITCH_H
