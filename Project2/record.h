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
    /**
     * Default constructor will read information from text file
     */
    Record();
    /**
     *  Constructor takes each member vector as and parameter
     */
    Record(QVector<QString>, QVector<QString>, QVector<QString>,
           QVector<QString>, QVector<QString>, QVector<bool>, QVector<bool>,
           QString);
    /**
     * Copy Constructor
     */
    Record(const Record& obj);
    /**
     * returns the vector of names
     */
    QVector<QString> getNameList() const;
    /**
     * returns the vector of first address lines
     */
    QVector<QString> getAddressList1() const;
    /**
     * returns the vector of second address lines
     */
    QVector<QString> getAddressList2() const;
    /**
     * returns the vector of interest
     */
    QVector<QString> getInterestList() const;
    /**
     * returns the vector of status
     */
    QVector<QString> getStatusList() const;
    /**
     * returns the vector of booleans indicating if they are key
     */
    QVector<bool> getKeyList() const;
    /**
     * returns the vector of booleans indicating if the customer has recieved the pamphlet
     */
    QVector<bool> getRecievedList() const;
    /**
     * returns the string of testimonials
     */
    QString getTestimonial() const;
    /**
     * adds a customer with properties pased in as paramters
     */
    void addCustomer(QString inName, QString inAddressLine1,
                     QString inAddressLine2, QString inInterest,
                     QString inStatus);
    /**
     * checks for the existnace of a record with the name passed as a parameter
     */
    bool checkName(QString inName) const;
    /**
     * returns the index of the name passed as a parameter
     */
    int findUserIndex(QString inName) const;
    /**
     * prints the record to the file
     */
    void save() const;
    /**
     * sets the index of the current user that is logged in
     */
    void setUserIndex(int inIndex);
    /**
     * returns the the index of the current user
     */
    int getUserIndex() const;
    /**
     * returns the true if the indexed customer has recieved a pamphlet , false otherwise
     */
    bool getHasRecieved(int index) const;
    /**
     * sets the indexed customer's "hasRecieved" field to true
     */
    void setHasRecieved(int index);
    /**
     * returns both lines of the address
     */
    QString getAddress(int index);
    /**
     * prints the record to the text file
     */
    friend std::ostream& operator<<(std::ostream& os, const Record& obj);
    /**
     * overloaded assignment operator, essentially a copy constructor
     */
    Record &operator=(const Record& obj);


private:
    ///parallel vectors hold relevant data
    ///names
    QVector<QString> name;
    ///first address line
    QVector<QString> addressLine1;
    ///second address line
    QVector<QString> addressLine2;
    ///string detailing the level of interest
    QVector<QString> interest;
    ///status of the customer
    QVector<QString> status;
    ///boolean to make determination of key customers easier
    QVector<bool> isKey;
    ///boolean is true if the customer has recieved a pamphlet
    QVector<bool> hasRecieved;
    ///testimonials
    QString testimonial;
    //this is the index of the user which is logged in
    int userIndex;

};
#endif
