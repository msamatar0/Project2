#include "record.h"
#include <iostream>
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

    QFile inputFile("../Resources/customerdata.txt");

    qDebug() << "filenamed\n";
    if(inputFile.open(QIODevice::ReadOnly)){
        QTextStream fin(&inputFile);
        fin >> userIndex;
        fin.readLine();


        qDebug() << "YEEAOW";
        while(!fin.atEnd()){
            //add in each relevant field
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
    QFile testFile("../Resources/testimonials.txt");
    if(testFile.open(QIODevice::ReadOnly)){
        QTextStream fin(&testFile);
        testimonial = fin.readAll();

    }
    qDebug() << "Test: "  << endl;
    qDebug() << testimonial;
}

Record::Record(QVector<QString> name, QVector<QString> address1, QVector<QString> address2,
       QVector<QString> interest, QVector<QString> status, QVector<bool> key, QVector<bool> received,
       QString testimonial) {

    this->name = name;
    addressLine1 = address1;
    addressLine2 = address2;
    this->interest = interest;
    this->status = status;
    isKey = key;
    hasRecieved = received;
    this->testimonial = testimonial;

}


void Record::save() const{
    int index=0;
    QFile outputFile("../Resources/customerdata.txt");

    if(outputFile.open(QIODevice::WriteOnly)){
        QTextStream fout(&outputFile);
        fout << userIndex << endl;
        for(index=0;index<name.size();++index){
            qDebug() << "round " << index << "...." << endl;
            qDebug() << name[index] << endl;
            qDebug() << addressLine1[index] << endl;
            qDebug() << addressLine2[index] << endl;
            qDebug() << interest[index] << endl;
            qDebug() << status[index] << endl;
            if(hasRecieved[index])
                qDebug() << 'y' << endl;
            else
                qDebug() << 'n' << endl;

            qDebug() << endl;


            //print relevant data to file
            fout << name[index] << endl;
            fout << addressLine1[index] << endl;
            fout << addressLine2[index] << endl;
            fout << interest[index] << endl;
            fout << status[index] << endl;
            if(hasRecieved[index])
                fout << 'y' << endl;
            else
                fout << 'n' << endl;

            if((index+1)<name.size())
                fout << endl;

        }
    }
    QFile testFile("../Resources/testimonials.txt");
    if(testFile.open(QIODevice::WriteOnly)){
        QTextStream fout (&testFile);
        fout << testimonial;
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
    if(inInterest == "key") isKey.push_back(inStatus=="key");
    else isKey.push_back("nice to have");

    //new members have not recieved the pamphlet (by default)
    hasRecieved.push_back('n');

    //testemonials handled seperately
}

void Record::remove(int index) {

    name.remove(index);
    addressLine1.remove(index);
    addressLine2.remove(index);
    interest.remove(index);
    status.remove(index);
    isKey.remove(index);
    hasRecieved.remove(index);

}


Record::Record(const Record& obj){
   //save existing record first
   std::cout << this;

   //copy data over
   userIndex = obj.userIndex;
   name = obj.name;
   addressLine1 = obj.addressLine1;
   addressLine2 = obj.addressLine2;
   interest = obj.interest;
   status = obj.status;
   isKey = obj.isKey;
   hasRecieved = obj.hasRecieved;
   testimonial = obj.testimonial;

}

Record &Record::operator=(const Record& obj){
   //save current record first
   std::cout << this;

   //copy data over
   userIndex = obj.userIndex;
   name = obj.name;
   addressLine1 = obj.addressLine1;
   addressLine2 = obj.addressLine2;
   interest = obj.interest;
   status = obj.status;
   isKey = obj.isKey;
   hasRecieved = obj.hasRecieved;
   testimonial = obj.testimonial;


    return *this;
}

std::ostream& operator<<(std::ostream& os, const Record& obj){
    obj.save();
  return os;
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

QString Record::getTestimonial() const{
    return testimonial;
}
bool Record::checkName(QString inName) const{
    return (this->name.contains(inName));
}
int Record::findUserIndex(QString inName) const{
    return (this->name.indexOf(inName));

}
void Record::setUserIndex(int inIndex){
   userIndex = inIndex;
}

int Record::getUserIndex() const{
    return userIndex;
}
bool Record::getHasRecieved(int index) const{
    return (hasRecieved[index]);
}
void Record::setHasRecieved(int index){
   hasRecieved[index] = true;
}

QString Record::getAddress(int index){
    return (addressLine1[index] + "\n" + addressLine2[index]);
}

void Record::setInterest(int index, QString intr){
    interest.replace(index, intr);
}


