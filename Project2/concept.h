#ifndef CONCEPT_H
#define CONCEPT_H

#include <QDialog>

namespace Ui {
class concept;
}

class concept : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief concept default constructor
     * @param parent
     */
    explicit concept(QWidget *parent = 0);
    ~concept();

private slots:
    /**
     * @brief on_backButton_clicked handles back button
     */
    void on_backButton_clicked();

private:
    Ui::concept *ui;
};

#endif // CONCEPT_H
