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
    Record(QVector<QString>, QVector<QString>, QVector<QString>,
           QVector<QString>, QVector<QString>, QVector<bool>, QVector<bool>,
           QVector<QString>);
    Record(const Record& obj);
    QVector<QString> getNameList() const;
    QVector<QString> getAddressList1() const;
    QVector<QString> getAddressList2() const;
    QVector<QString> getInterestList() const;
    QVector<QString> getStatusList() const;
    QVector<bool> getKeyList() const;
    QVector<bool> getRecievedList() const;
    QVector<QString> getTestimonial() const;
    void addCustomer(QString inName, QString inAddressLine1,
                     QString inAddressLine2, QString inInterest,
                     QString inStatus);
    bool checkName(QString inName);
    int findUserIndex(QString inName);
    void save() const;
    void setUserIndex(int inIndex);
    int getUserIndex();
    bool getHasRecieved(int index);
    void setHasRecieved(int index);
    QString getAddress(int index);
    friend std::ostream& operator<<(std::ostream& os, const Record& obj);
    Record &operator=(const Record& obj);


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
    //this is the index of the user which is logged in
    int userIndex;

};
#endif
