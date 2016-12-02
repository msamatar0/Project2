/********************************************************************************
** Form generated from reading UI file 'ratingscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RATINGSCREEN_H
#define UI_RATINGSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ratingscreen
{
public:
    QLabel *rateLabel;
    QComboBox *rateBox;
    QPushButton *rateButton;
    QPushButton *backButton;

    void setupUi(QDialog *ratingscreen)
    {
        if (ratingscreen->objectName().isEmpty())
            ratingscreen->setObjectName(QStringLiteral("ratingscreen"));
        ratingscreen->resize(524, 241);
        rateLabel = new QLabel(ratingscreen);
        rateLabel->setObjectName(QStringLiteral("rateLabel"));
        rateLabel->setGeometry(QRect(20, 60, 291, 21));
        QFont font;
        font.setPointSize(9);
        rateLabel->setFont(font);
        rateBox = new QComboBox(ratingscreen);
        rateBox->setObjectName(QStringLiteral("rateBox"));
        rateBox->setEnabled(true);
        rateBox->setGeometry(QRect(330, 60, 91, 22));
        rateBox->setEditable(false);
        rateButton = new QPushButton(ratingscreen);
        rateButton->setObjectName(QStringLiteral("rateButton"));
        rateButton->setGeometry(QRect(430, 60, 75, 23));
        backButton = new QPushButton(ratingscreen);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(20, 200, 101, 23));

        retranslateUi(ratingscreen);

        QMetaObject::connectSlotsByName(ratingscreen);
    } // setupUi

    void retranslateUi(QDialog *ratingscreen)
    {
        ratingscreen->setWindowTitle(QApplication::translate("ratingscreen", "Dialog", 0));
        rateLabel->setText(QApplication::translate("ratingscreen", "How much did you enjoy our product?", 0));
        rateBox->clear();
        rateBox->insertItems(0, QStringList()
         << QApplication::translate("ratingscreen", "Interesting", 0)
         << QApplication::translate("ratingscreen", "Satisfactory", 0)
         << QApplication::translate("ratingscreen", "Terrible", 0)
        );
        rateButton->setText(QApplication::translate("ratingscreen", "Rate", 0));
        backButton->setText(QApplication::translate("ratingscreen", "Return to Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class ratingscreen: public Ui_ratingscreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RATINGSCREEN_H
