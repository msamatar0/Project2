#ifndef ERRORWINDOW_H
#define ERRORWINDOW_H

#include <QDialog>

namespace Ui {
class errorWindow;
}

class errorWindow : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief errorWindow - default constructor
     * @param parent
     */
    explicit errorWindow(QWidget *parent = 0);
    /**
     * @brief errorWindow
     * @param parent
     * @param QString - the error message to be displayed
     */
    errorWindow(QWidget *parent, QString);
    ~errorWindow();

private slots:
    /**
     * @brief on_pushButton_OK_clicked handles ok button
     */
    void on_pushButton_OK_clicked();

private:
    Ui::errorWindow *ui;
};

#endif // ERRORWINDOW_H
