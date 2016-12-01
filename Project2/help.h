#ifndef HELP_H
#define HELP_H

#include <QWidget>
//#include "customerscreen.h"

namespace Ui {
class help;
}

class help : public QWidget
{
    Q_OBJECT

public:
    explicit help(QWidget *parent = 0);
    ~help();

private slots:
    void on_pushButton_clicked();

private:
    Ui::help *ui;
    //customerScreen *customer;
};

#endif // HELP_H
