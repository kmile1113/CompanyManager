#ifndef SALASMAN_H
#define SALASMAN_H

#include "employee.h"

class Salasman:public Employee
{
public:
    int sales;
    float commrate;
    Salasman(int id,string name,string gender,
             Date birthday,int sales,
             float commrate=0.02,string position="œ˙ €‘±",
             float basicSalary=2000);

    virtual float getSalary();
};

#endif // SALASMAN_H
