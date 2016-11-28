#ifndef RATINGSCREEN_H
#define RATINGSCREEN_H

#include <QDialog>

namespace Ui {
class ratingscreen;
}

class ratingscreen : public QDialog
{
    Q_OBJECT

public:
    explicit ratingscreen(QWidget *parent = 0);
    ~ratingscreen();

private slots:
    void on_rateButton_clicked();

    void on_backButton_clicked();

private:
    Ui::ratingscreen *ui;
};

#endif // RATINGSCREEN_H
