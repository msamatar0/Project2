#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "customerscreen.h"
#include "adminpanel.h"

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

    void on_login_pushButton_adminLogin_clicked();

private:
    Ui::MainWindow *ui;
    CustomerScreen *customerScreen;
    AdminPanel *adminPanel;
};

#endif // MAINWINDOW_H
