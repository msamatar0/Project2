#include "testimonials.h"
#include "ui_testimonials.h"

testimonials::testimonials(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::testimonials)
{
    ui->setupUi(this);
}

testimonials::~testimonials()
{
    delete ui;
}

void testimonials::on_pushButton_clicked()
{
    this->parentWidget()->show();
    this->close();
}
