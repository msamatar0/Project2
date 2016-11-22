#include "record.h"
Record::Record()

{
    //first read in each customer with their basic info,
    //format:
    /*
     * Name
     * Address
     * City, STATE ZIP
     * interest
     * key / nice to have
     * has recieved y/n
     */
    //this value will change each time to read in different field

    int index = 0;

    QFile inputFile("customerdata.txt");

    qDebug() << "filenamed\n";
    if(inputFile.open(QIODevice::ReadOnly)){
        QTextStream fin(&inputFile);

        qDebug() << "YEEAOW";
        while(!fin.atEnd()){
            name.push_back(fin.readLine());
            addressLine1.push_back(fin.readLine());
            addressLine2.push_back(fin.readLine());
            interest.push_back(fin.readLine());
            status.push_back(fin.readLine());
            //store "isKey" as a seperate boolean
            if(status[index]=="key")
               isKey.push_back(true);
            else
                isKey.push_back((false));
            if(fin.readLine()=="y")
                hasRecieved.push_back(true);
            else
                hasRecieved.push_back(false);

            fin.readLine();
            ++index;

            //testimonials will be taken care of seperately, they are in a different file.
        }
    }

}
//this will be used later once we are adding members,
//we can have a simple window pop up whenver a person
//logs on who is not already in the database
void Record::addCustomer(QString inName, QString inAddressLine1,
                         QString inAddressLine2, QString inInterest,
                         QString inStatus){
    //input variables will be linked to GUI


    name.push_back(inName);
    addressLine1.push_back(inAddressLine1);
    addressLine2.push_back(inAddressLine2);
    status.push_back(inStatus);
    interest.push_back(inInterest);

    //if is key, push back true, else false
    isKey.push_back(inStatus=="key");

    //new members have not recieved the pamphlet (by default)
    hasRecieved.push_back('n');

    //testemonials handled seperately



}

QVector<QString> Record::getNameList() const{
    return name;
}

QVector<QString> Record::getAddressList1() const{
    return addressLine1;
}

QVector<QString> Record::getAddressList2() const{
    return addressLine2;
}

QVector<QString> Record::getInterestList() const{
    return interest;
}

QVector<QString> Record::getStatusList() const{
    return status;
}

QVector<bool> Record::getKeyList() const{
    return isKey;
}

QVector<bool> Record::getRecievedList() const{
    return hasRecieved;
}

QVector<QString> Record::getTestimonial() const{
    return testimonial;
}
bool Record::checkName(QString inName){
    return (this->name.contains(inName));
}
int Record::findUserIndex(QString inName){
    return (this->name.indexOf(inName));

}

