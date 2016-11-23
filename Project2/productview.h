#ifndef PRODUCTVIEW_H
#define PRODUCTVIEW_H

#include <QDialog>
#include <QLabel>

namespace Ui {
class productView;
}

class productView : public QDialog
{
    Q_OBJECT

public:
    explicit productView(QWidget *parent = 0);
    ~productView();

private slots:
    void on_pushButton_clicked();

private:
    Ui::productView *ui;
    void initImages();
};

#endif // PRODUCTVIEW_H
