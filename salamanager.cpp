#include "salamanager.h"



Salamanager::Salamanager(int id, string name, string gender, Date birthday, int sales, float commrate, string position, float basicSalary, int jobSalary)
    :Salasman(id,name,gender,birthday,sales,commrate,position,basicSalary),
      jobSalary(jobSalary)
{

}

float Salamanager::getSalary()
{
    return getBasicSalary()+jobSalary+commrate*sales;
}
