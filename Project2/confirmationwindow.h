#ifndef CONFIRMATIONWINDOW_H
#define CONFIRMATIONWINDOW_H

#include <QDialog>

namespace Ui {
class confirmationWindow;
}

class confirmationWindow : public QDialog
{
    Q_OBJECT

public:
    explicit confirmationWindow(QWidget *parent = 0);
    confirmationWindow(QWidget *parent, QString text);
    ~confirmationWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::confirmationWindow *ui;
};

#endif // CONFIRMATIONWINDOW_H
