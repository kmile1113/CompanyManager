#include <iostream>
#include "salamanager.h"
#include <stdlib.h>
using namespace std;

int main()
{
    Employee* emps[10];
    int index = 0;
     cout << "欢迎使用XXX管理系统" << endl;
    while(true){

    cout << "1.添加员工 2.查询员工信息 3.修改员工信息" << endl;

    string choice;
    cin >> choice ;
    if(choice == "1"){
        cout <<"请问添加的员工为什么岗位?1.普通职工 2.销售员工 3.销售经理" <<endl;
        cin >> choice;
        if(choice == "1"){
            cout <<"请输入员工姓名:";
            string name;
            cin >> name;
            cout <<"请输入员工性别:";
            string gender;
            cin >> gender;
            cout <<"请输入员工出生年月日(2001-1-3):";
            string birthday;
            cin >> birthday;
            string year = birthday.substr(0,4);
            string month = birthday.substr(5,birthday.find_last_of("-")-5);
            string day = birthday.substr(birthday.find_last_of("-")+1,birthday.size()-birthday.find_last_of("-"));
            Date date(atoi(year.c_str()),atoi(month.c_str()),atoi(day.c_str()));
            emps[index++] = new Employee(index+1,name,gender,date);
        }else if(choice == "2"){
            cout <<"请输入员工姓名:";
            string name;
            cin >> name;
            cout <<"请输入员工性别:";
            string gender;
            cin >> gender;
            cout <<"请输入员工出生年月日(2001-1-3):";
            string birthday;
            cin >> birthday;
            string year = birthday.substr(0,4);
            string month = birthday.substr(5,birthday.find_last_of("-")-5);
            string day = birthday.substr(birthday.find_last_of("-")+1,birthday.size()-birthday.find_last_of("-"));
            Date date(atoi(year.c_str()),atoi(month.c_str()),atoi(day.c_str()));
            emps[index++] = new Salasman(index+1,name,gender,date,500000);
        }else if(choice == "3"){
            cout <<"请输入员工姓名:";
            string name;
            cin >> name;
            cout <<"请输入员工性别:";
            string gender;
            cin >> gender;
            cout <<"请输入员工出生年月日(2001-1-3):";
            string birthday;
            cin >> birthday;
            string year = birthday.substr(0,4);
            string month = birthday.substr(5,birthday.find_last_of("-")-5);
            string day = birthday.substr(birthday.find_last_of("-")+1,birthday.size()-birthday.find_last_of("-"));
            Date date(atoi(year.c_str()),atoi(month.c_str()),atoi(day.c_str()));
            emps[index++] = new Salamanager(index+1,name,gender,date,80000);
        }
        cout << "添加成功" << endl;
    }else if(choice == "2"){
        cout << "请输入员工的工号" << endl;
        int id;
        cin >> id;
        for(int i=0;i<index;i++){
            if(emps[i]->getId() == id){
                emps[i]->showInfo();
            }
        }
    }else if(choice == "3"){
        cout << "请输入修改员工工号" << endl;
    }
   }

    return 0;
}

