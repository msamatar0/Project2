#ifndef CUSTOMERSCREEN_H
#define CUSTOMERSCREEN_H

#include <QDialog>
#include "record.h"
#include "productview.h"

namespace Ui {
class customerScreen;
}

class customerScreen : public QDialog
{
    Q_OBJECT

public:
    explicit customerScreen(QWidget *parent = 0);
    ~customerScreen();

private slots:
    void on_pushButton_products_clicked();

    void on_pushButton_requestPamphlet_clicked();

private:
    Record record;
    productView *products;
    Ui::customerScreen *ui;
};

#endif // CUSTOMERSCREEN_H
