#ifndef MAINTENANCE_H
#define MAINTENANCE_H

#include <QDialog>

namespace Ui {
class maintenance;
}

class maintenance : public QDialog
{
    Q_OBJECT

public:
    explicit maintenance(QWidget *parent = 0);
    ~maintenance();

private slots:
    /**
     * @brief on_backButton_clicked handles back button
     */
    void on_backButton_clicked();

private:
    Ui::maintenance *ui;
};

#endif // MAINTENANCE_H
