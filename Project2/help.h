/**************************************************************************************************
 * This file opens the help window, this window just has a description of what the program does.
 * It has an exit button to close the window when user is done.
**************************************************************************************************/

#ifndef HELP_H
#define HELP_H

#include <QMainWindow>

namespace Ui {
class help;
}

class help : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief help default constructor
     * @param parent
     */
    explicit help(QWidget *parent = 0);
    ~help();

private slots:
    /**
     * @brief on_pushButton_clicked handles the close button
     */
    void on_pushButton_clicked();

private:
    /**
     * @brief ui base ui
     */
    Ui::help *ui;
};

#endif // HELP_H
