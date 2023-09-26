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
    Employee(int id,string name,string gender,Date birthday,string position="ְ��",float basicSalary=5000);

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
        cout << name << "�Ա�"<< gender << " �����ڣ�"<< birthday.getYear()<<"��"<<birthday.getMonth()<<"��"<<birthday.getDate()<<"��" << endl;
        cout << "��һ��" << position << " ���¹���Ϊ" << getSalary() << endl;
    }


};

#endif // EMPLOYEE_H
