/********************************************************************************
** Form generated from reading UI file 'concept.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONCEPT_H
#define UI_CONCEPT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_concept
{
public:
    QLabel *conceptLabel;
    QPushButton *backButton;

    void setupUi(QDialog *concept)
    {
        if (concept->objectName().isEmpty())
            concept->setObjectName(QStringLiteral("concept"));
        concept->resize(400, 300);
        conceptLabel = new QLabel(concept);
        conceptLabel->setObjectName(QStringLiteral("conceptLabel"));
        conceptLabel->setGeometry(QRect(50, 30, 311, 191));
        QFont font;
        font.setPointSize(10);
        conceptLabel->setFont(font);
        conceptLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        conceptLabel->setWordWrap(true);
        backButton = new QPushButton(concept);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(20, 260, 80, 21));

        retranslateUi(concept);

        QMetaObject::connectSlotsByName(concept);
    } // setupUi

    void retranslateUi(QDialog *concept)
    {
        concept->setWindowTitle(QApplication::translate("concept", "Dialog", 0));
        conceptLabel->setText(QApplication::translate("concept", "iRobotsTheBomb is a company that detects and disposes of explosives", 0));
        backButton->setText(QApplication::translate("concept", "Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class concept: public Ui_concept {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONCEPT_H
