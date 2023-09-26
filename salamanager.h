#ifndef SALAMANAGER_H
#define SALAMANAGER_H

#include "salasman.h"

class Salamanager:public Salasman
{
public:
    int jobSalary;

    Salamanager(int id,string name,string gender,Date birthday,int sales,float commrate=0.03,string position="销售经理",float basicSalary=4000,int jobSalary=1000);
    virtual float getSalary();
};

#endif // SALAMANAGER_H
