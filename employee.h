#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include "date.h"
using namespace std;


class Employee
{
private:
    int id;
    string name;
    string gender;
    Date birthday;
    string position;
    float basicSalary;

public:
    Employee();
    Employee(int id,string name,string gender);
    Employee(int id,string name,string gender,Date birthday,string position="职工",float basicSalary=5000);

    virtual float getSalary();

    void setId(int id);
    void setName(string name);
    void setGender(string gender);
    void setDate(const Date& birthday);
    void setPosition(string position);
    void setBasicSalary(float basicSalary);

    int getId();
    string getName();
    string getGender();
    string getPosition();
    Date getBirthday();
    float getBasicSalary();

    void showInfo(){
        cout << name << "性别："<< gender << " 出生于："<< birthday.getYear()<<"年"<<birthday.getMonth()<<"月"<<birthday.getDate()<<"日" << endl;
        cout << "是一名" << position << " 本月工资为" << getSalary() << endl;
    }


};

#endif // EMPLOYEE_H
