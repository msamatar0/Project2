/***************************************************************************************************************************
 * This file opens the testimonials window, this window just has a description of what customers think about the product.
 * It has description text box and an exit button to close the window when user is done.
***************************************************************************************************************************/

#ifndef TESTIMONIALS_H
#define TESTIMONIALS_H

#include <QMainWindow>

namespace Ui {
class testimonials;
}

class testimonials : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief testimonials default constructor
     * @param parent
     */
    explicit testimonials(QWidget *parent = 0);
    ~testimonials();

private slots:
    /**
     * @brief on_pushButton_clicked handles the close button
     */
    void on_pushButton_clicked();

private:
    /**
     * @brief ui base ui
     */
    Ui::testimonials *ui;
};

#endif // TESTIMONIALS_H
