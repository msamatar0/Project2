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
