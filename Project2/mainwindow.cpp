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
    customerScreen = new CustomerScreen();
    this->hide();
    customerScreen->show();
}

void MainWindow::on_login_pushButton_adminLogin_clicked()
{
    adminPanel = new AdminPanel();
    this->hide();
    adminPanel->show();
}
