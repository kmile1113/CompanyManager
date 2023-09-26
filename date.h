#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date
{
private:
    int year;
    int month;
    int date;
public:
    Date(int year = 1970,int month = 1,int date = 1);

    void setYear(int year);
    void setMonth(int month);
    void setDate(int date);

    int getYear();
    int getMonth();
    int getDate();


};

#endif // DATE_H
