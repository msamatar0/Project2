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
    /**
     * @brief productView default constructor
     * @param parent
     */
    explicit productView(QWidget *parent = 0);
    ~productView();

private slots:
    /**
     * @brief on_pushButton_clicked handles back button
     */
    void on_pushButton_clicked();

private:
    Ui::productView *ui;
    /**
     * @brief initImages initializes images for use with this pane
     */
    void initImages();
};

#endif // PRODUCTVIEW_H
