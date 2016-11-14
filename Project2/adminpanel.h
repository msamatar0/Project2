#ifndef ADMINPANEL_H
#define ADMINPANEL_H

#include <QDialog>

namespace Ui {
class adminpanel;
}

class adminpanel : public QDialog
{
    Q_OBJECT

public:
    explicit adminpanel(QWidget *parent = 0);
    ~adminpanel();

private:
    Ui::adminpanel *ui;
};

#endif // ADMINPANEL_H
