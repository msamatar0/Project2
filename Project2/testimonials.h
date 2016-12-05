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
    explicit testimonials(QWidget *parent = 0);
    ~testimonials();

private slots:
    void on_pushButton_clicked();

private:
    Ui::testimonials *ui;
};

#endif // TESTIMONIALS_H
