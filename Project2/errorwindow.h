#ifndef ERRORWINDOW_H
#define ERRORWINDOW_H

#include <QDialog>

namespace Ui {
class errorWindow;
}

class errorWindow : public QDialog
{
    Q_OBJECT

public:
    explicit errorWindow(QWidget *parent = 0);
    errorWindow(QWidget *parent, QString);
    ~errorWindow();

private slots:
    void on_pushButton_OK_clicked();

private:
    Ui::errorWindow *ui;
};

#endif // ERRORWINDOW_H
