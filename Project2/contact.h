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
    /**
     * @brief contact default constructor
     * @param parent
     */
    explicit contact(QWidget *parent = 0);
    ~contact();

private slots:
    /**
     * @brief on_pushButton_clicked handles the close button
     */
    void on_pushButton_clicked();
    /**
     * @brief on_pushButton_2_clicked handles the send button
     */
    void on_pushButton_2_clicked();

private:
    /**
     * @brief ui base ui
     */
    Ui::contact *ui;
};

#endif // CONTACT_H
