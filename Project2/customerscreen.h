#ifndef CUSTOMERSCREEN_H
#define CUSTOMERSCREEN_H

#include <QDialog>

namespace Ui {
class customerScreen;
}

class customerScreen : public QDialog
{
    Q_OBJECT

public:
    explicit customerScreen(QWidget *parent = 0);
    ~customerScreen();

private:
    Ui::customerScreen *ui;
};

#endif // CUSTOMERSCREEN_H
