#ifndef PRODUCT_H
#define PRODUCT_H

#include <QDialog>

namespace Ui {
class product;
}

class product : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief product default constructor
     * @param parent
     */
    explicit product(QWidget *parent = 0);
    ~product();

private slots:
    /**
     * @brief on_backButton_clicked handles back button
     */
    void on_backButton_clicked();

private:
    Ui::product *ui;
};

#endif // PRODUCT_H
