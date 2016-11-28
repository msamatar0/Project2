#include "ratingscreen.h"
#include "ui_ratingscreen.h"

ratingscreen::ratingscreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ratingscreen)
{
    ui->setupUi(this);
}

ratingscreen::~ratingscreen()
{
    delete ui;
}

void ratingscreen::on_rateButton_clicked()
{
    QString interest,
            score = ui->rateBox->currentText();
    ui->rateBox->setDisabled(1);
    ui->rateLabel->setText("Thank you for the feedback!");
}

void ratingscreen::on_backButton_clicked()
{
    this->parentWidget()->show();
    this->close();
}
