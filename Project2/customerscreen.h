#ifndef CUSTOMERSCREEN_H
#define CUSTOMERSCREEN_H

#include <QDialog>
#include "record.h"

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
    Record record;
    Ui::customerScreen *ui;
};

#endif // CUSTOMERSCREEN_H
