#ifndef PERSON_H
#define PERSON_H

#include <QString>

class person {

  private:
    QString name;

  public:
    virtual void print() = 0;
    QString getName();

};

#endif // PERSON_H
