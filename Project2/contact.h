/************************************************************************************************************************************
 * This file opens the contact window, this window tells the user ow to send a messsage.
 * It has a description text box, a combo box, a text box, a send button, and an exit button to close the window when user is done.
************************************************************************************************************************************/

#ifndef CONTACT_H
#define CONTACT_H

#include <QMainWindow>

namespace Ui {
class contact;
}

class contact : public QMainWindow
{
    Q_OBJECT

public:
    explicit contact(QWidget *parent = 0);
    ~contact();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::contact *ui;
};

#endif // CONTACT_H
