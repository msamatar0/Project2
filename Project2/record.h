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
     * @brief Default constructor will read information from text file
     */
    Record();
    /**
     * @brief Record constructor takes in each field
     */
    Record(QVector<QString>, QVector<QString>, QVector<QString>,
           QVector<QString>, QVector<QString>, QVector<bool>, QVector<bool>,
           QString);

    /**
     * @brief Record Copy Constructor
     * @param obj object to be copied into
     */
    Record(const Record& obj);
    /**
     * @brief getNameList returns the name list
     * @return  list of names
     */
    QVector<QString> getNameList() const;
    /**
     * @brief getAddressList1 returns the vector of first address lines
     * @return addresslist1
     */
    QVector<QString> getAddressList1() const;
    /**
     * @brief getAddressList2 returns the vector of second address lines
     * @return addresslist2
     */
    QVector<QString> getAddressList2() const;
    /**
     * @brief getInterestList returns list of interests
     * @return list of interests
     */
    QVector<QString> getInterestList() const;
    /**
     * @brief getStatusList returns list of statuses
     * @return list of status
     */
    QVector<QString> getStatusList() const;
    /**
     * @brief getKeyList gets the list of key/nonkey
     * @return list of T/F if the customer is key
     */
    QVector<bool> getKeyList() const;
    /**
     * @brief getRecievedList reurns list of T/F indicating if the customer has recieved
     * @return list of T/F is the customer has recieved
     */
    QVector<bool> getRecievedList() const;
    /**
     * @brief getTestimonials returns the string of testimonials
     * @return testimonials
     */
    QString getTestimonial() const;
    /**
     * @brief addCustomer adds the customer
     * @param inName name of new customer
     * @param inAddressLine1 line one
     * @param inAddressLine2 line two
     * @param inInterest interest of new customer
     * @param inStatus status of new customer
     */
    void addCustomer(QString inName, QString inAddressLine1,
                     QString inAddressLine2, QString inInterest,
                     QString inStatus);
    /**
     * @brief  checkNamechecks for the existnace of a record with the name passed as a parameter
     * @param  inName the name being checked
     * @returns true if the user exists, false otherwise
     */
    bool checkName(QString inName) const;
    /**
     * @brief findUserIndex returns the index of the name passed as a parameter
     * @param the name of the user
     * @return index of user
     */
    int findUserIndex(QString inName) const;
    /**
     * @brief prints the record to the file
     */
    void save() const;
    /**
     * @brief setUserIndex sets the index of the current user that is logged in
     * @param inIndex the new user index
     */
    void setUserIndex(int inIndex);
    /**
     * @brief getUserIndex returns the the index of the current user
     * @return the current userIndex
     */
    int getUserIndex() const;
    /**
     * @brief getHasRecieved returns the true if the indexed customer has recieved a pamphlet , false otherwise
     * @param index is the index of the customer
     * @return true if the user has recieved, false otherwise
     */
    bool getHasRecieved(int index) const;
    /**
     * @brief setHasRecieved sets the indexed customer's "hasRecieved" field to true
     * @param index is the index to be set
     */
    void setHasRecieved(int index);
    /**
     *  @brief remove removes all info at given index
     * 	@param index is the index of the user to be removed
     */
    void remove(int index);
    /**
     * @brief getAddress returns both lines of the address
     */
    QString getAddress(int index);
    /**
     * @brief operator << prints the info to file
     * @param os ostream var, not used
     * @param obj record object to be printed
     * @return the full address
     */
    friend std::ostream& operator<<(std::ostream& os, const Record& obj);
    /**
     * @brief operator =  overloaded assignment operator, essentially a copy constructor
     * @param obj
     * @return an empty ostream var
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
