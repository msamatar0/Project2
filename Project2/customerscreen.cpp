#include "customerscreen.h"
#include "ui_customerscreen.h"

CustomerScreen::CustomerScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerScreen)
{
    ui->setupUi(this);
}

CustomerScreen::~CustomerScreen()
{
    delete ui;
}
