#include "date.h"



Date::Date(int year, int month, int date):
    year(year),month(month),date(date)
{

}

void Date::setYear(int year){
    this->year = year;
}



void Date::setMonth(int month){
    this->month = month;
}



void Date::setDate(int date){
    this->date = date;
}

int Date::getYear(){
    return year;
}

int Date::getMonth()
{
    return month;
}
int Date::getDate()
{
    return date;
}
