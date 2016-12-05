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
#include "contact.h"
#include "testimonials.h"

namespace Ui {
class customerScreen;
}

class customerScreen : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief customerScreen default constructor
     * @param parent
     */
    explicit customerScreen(QWidget *parent = 0);
    ~customerScreen();

private slots:
    /**
     * @brief on_pushButton_products_clicked handles products button
     */
    void on_pushButton_products_clicked();
    /**
     * @brief on_pushButton_requestPamphlet_clicked handles request pamphlets button
     */
    void on_pushButton_requestPamphlet_clicked();
    /**
     * @brief on_pushButton_concept_clicked handles concept button
     */
    void on_pushButton_concept_clicked();
    /**
     * @brief on_pushButton_rating_clicked handles rating button
     */
    void on_pushButton_rating_clicked();
    /**
     * @brief on_pushButton_guarantee_clicked handles guarantee button
     */
    void on_pushButton_guarantee_clicked();
    /**
     * @brief on_pushButton_back_clicked handles back button
     */
    void on_pushButton_back_clicked();
    /**
     * @brief on_pushButton_help_clicked handles help button
     */
    void on_pushButton_help_clicked();
    /**
     * @brief on_pushButton_orderNow_clicked handles order form button
     */
    void on_pushButton_orderNow_clicked();
    /**
     * @brief on_pushButton_testimonial_clicked handles the testimonial button
     */
    void on_pushButton_testimonial_clicked();
    /**
     * @brief on_pushButton_contact_clicked handles the contact button
     */
    void on_pushButton_contact_clicked();

private:
    /**
     * All potential windows
     */
    testimonials *showTestimonials;
    contact *contactUs;
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
