#ifndef ADMIN_H
#define ADMIN_H

#include "person.h"

class admin : public person {

  private:
    QString password;

  public:
    void print();
    bool validate(QString);

};

#endif // ADMIN_H
