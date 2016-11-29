#ifndef SALESPITCH_H
#define SALESPITCH_H

#include <QDialog>

namespace Ui {
class salespitch;
}

class salespitch : public QDialog
{
    Q_OBJECT

public:
    explicit salespitch(QWidget *parent = 0);
    ~salespitch();

private slots:
    void on_backButton_clicked();

private:
    Ui::salespitch *ui;
};

#endif // SALESPITCH_H
