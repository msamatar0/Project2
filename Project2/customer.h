#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "person.h"

class customer : public person {

  private:
    QString addressLine1;
    QString addressLine2;
    QString interest;
    QString status;
    bool isKey;
    bool hasRecieved;

  public:
    /**
     * @brief print - overloaded from pure virtual method, prints customer info
     */
    void print();

};

#endif // CUSTOMER_H
