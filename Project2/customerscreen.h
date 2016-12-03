#ifndef CUSTOMERSCREEN_H
#define CUSTOMERSCREEN_H

#include <QDialog>
#include "record.h"
#include "productview.h"
#include "ratingscreen.h"
#include "concept.h"
#include "salespitch.h"
#include "help.h"
#include "orderform.h"

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

    void on_pushButton_concept_clicked();

    void on_pushButton_rating_clicked();

    void on_pushButton_guarantee_clicked();

    void on_pushButton_back_clicked();

    void on_pushButton_help_clicked();

    void on_pushButton_orderNow_clicked();

private:
    help *helpMe;
    Record record;
    productView *products;
    Ui::customerScreen *ui;
    ratingscreen *rate;
    concept *con;
    salespitch *pitch;
    orderform *form;
};

#endif // CUSTOMERSCREEN_H
