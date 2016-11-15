#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_login_pushButton_enter_clicked()
{
    customer = new customerScreen(this);
    customer->show();
    this->hide();
}

void MainWindow::on_actionAdministrator_Login_triggered()
{
    admin = new adminLogin(this);
    admin->show();
    this->hide();
}
