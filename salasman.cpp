#include "salasman.h"





Salasman::Salasman(int id, string name, string gender, Date birthday, int sales, float commrate, string position, float basicSalary)
    :Employee(id,  name,  gender,  birthday,  position,  basicSalary),
      sales(sales),
      commrate(commrate)
{

}

float Salasman::getSalary()
{
    return getBasicSalary()+sales*commrate;
}
