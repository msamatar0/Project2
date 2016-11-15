#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "customerscreen.h"
#include "adminlogin.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_login_pushButton_enter_clicked();
    void on_actionAdministrator_Login_triggered();

private:
    Ui::MainWindow *ui;
    customerScreen *customer;
    adminLogin *admin;

};

#endif // MAINWINDOW_H
