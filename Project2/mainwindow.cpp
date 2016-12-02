#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "record.h"
#include <QMessageBox>

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
    QString name = ui->login_lineEdit_user->text();
    Record compareRec;
    //the location of the current user in the parallel vectors
    int userIndex;
    qDebug() << "Here is the name" << name << endl;

    //check if the name is already in the database
    if(compareRec.checkName(name)){
       //will store this index at a later time in order to keep track of whcih company it is using the progam
       userIndex = compareRec.findUserIndex(name);
       compareRec.setUserIndex(userIndex);

       compareRec.save();
       qDebug() << "User is already in the database" << " Index is: " << userIndex << endl;
       qDebug() << "User is already in the database" << " Index is: " << userIndex << endl;
        QMessageBox::information(this,"Logged In","Welcome Back " + name + "!");


    }
    else{
        QMessageBox::information(this,"Logged In","Welcome to iRobots!");
    }
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
