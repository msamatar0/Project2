#ifndef RECORD_H
#define RECORD_H
#include <QVector>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QDebug>


class Record
    /*
     * Name
     * Address
     * City, STATE ZIP
     * interest
     * key / nice to have
     * has recieved y/n
     */
{
public:
    Record();



private:
    //parallel vectors hold relevant data
    QVector<QString> name;
    QVector<QString> addressLine1;
    QVector<QString> addressLine2;
    QVector<QString> interest;
    QVector<QString> status;
    QVector<bool> isKey;
    QVector<bool> hasRecieved;
    QVector<QString> testimonial;

};
#endif
