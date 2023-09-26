#include "employee.h"




Employee::Employee()
{

}

Employee::Employee(int id, string name, string gender):
    id(id),name(name),gender(gender){

}

Employee::Employee(int id, string name, string gender, Date birthday, string position, float basicSalary)
    :Employee(id,name,gender)
{
    this->birthday = birthday;
    this->position = position;
    this->basicSalary = basicSalary;
}

float Employee::getSalary()
{
    return basicSalary;
}

void Employee::setId(int id){
    this->id = id;
}

void Employee::setName(string name){
    this->name = name;
}

void Employee::setGender(string gender){
    this->gender = gender;
}

void Employee::setDate(const Date &birthday){
    this->birthday = birthday;
}

void Employee::setPosition(string position){
    this->position = position;
}

void Employee::setBasicSalary(float basicSalary){
    this->basicSalary = basicSalary;
}

int Employee::getId(){
    return id;
}

string Employee::getName(){
    return name;

}

string Employee::getGender(){
    return gender;

}

string Employee::getPosition(){
    return position;

}

Date Employee::getBirthday(){
    return birthday;

}

float Employee::getBasicSalary(){
    return basicSalary;

}

