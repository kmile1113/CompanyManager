#include <iostream>
#include "salamanager.h"
#include <stdlib.h>
using namespace std;

int main()
{
    Employee* emps[10];
    int index = 0;
     cout << "��ӭʹ��XXX����ϵͳ" << endl;
    while(true){

    cout << "1.���Ա�� 2.��ѯԱ����Ϣ 3.�޸�Ա����Ϣ" << endl;

    string choice;
    cin >> choice ;
    if(choice == "1"){
        cout <<"������ӵ�Ա��Ϊʲô��λ?1.��ְͨ�� 2.����Ա�� 3.���۾���" <<endl;
        cin >> choice;
        if(choice == "1"){
            cout <<"������Ա������:";
            string name;
            cin >> name;
            cout <<"������Ա���Ա�:";
            string gender;
            cin >> gender;
            cout <<"������Ա������������(2001-1-3):";
            string birthday;
            cin >> birthday;
            string year = birthday.substr(0,4);
            string month = birthday.substr(5,birthday.find_last_of("-")-5);
            string day = birthday.substr(birthday.find_last_of("-")+1,birthday.size()-birthday.find_last_of("-"));
            Date date(atoi(year.c_str()),atoi(month.c_str()),atoi(day.c_str()));
            emps[index++] = new Employee(index+1,name,gender,date);
        }else if(choice == "2"){
            cout <<"������Ա������:";
            string name;
            cin >> name;
            cout <<"������Ա���Ա�:";
            string gender;
            cin >> gender;
            cout <<"������Ա������������(2001-1-3):";
            string birthday;
            cin >> birthday;
            string year = birthday.substr(0,4);
            string month = birthday.substr(5,birthday.find_last_of("-")-5);
            string day = birthday.substr(birthday.find_last_of("-")+1,birthday.size()-birthday.find_last_of("-"));
            Date date(atoi(year.c_str()),atoi(month.c_str()),atoi(day.c_str()));
            emps[index++] = new Salasman(index+1,name,gender,date,500000);
        }else if(choice == "3"){
            cout <<"������Ա������:";
            string name;
            cin >> name;
            cout <<"������Ա���Ա�:";
            string gender;
            cin >> gender;
            cout <<"������Ա������������(2001-1-3):";
            string birthday;
            cin >> birthday;
            string year = birthday.substr(0,4);
            string month = birthday.substr(5,birthday.find_last_of("-")-5);
            string day = birthday.substr(birthday.find_last_of("-")+1,birthday.size()-birthday.find_last_of("-"));
            Date date(atoi(year.c_str()),atoi(month.c_str()),atoi(day.c_str()));
            emps[index++] = new Salamanager(index+1,name,gender,date,80000);
        }
        cout << "��ӳɹ�" << endl;
    }else if(choice == "2"){
        cout << "������Ա���Ĺ���" << endl;
        int id;
        cin >> id;
        for(int i=0;i<index;i++){
            if(emps[i]->getId() == id){
                emps[i]->showInfo();
            }
        }
    }else if(choice == "3"){
        cout << "�������޸�Ա������" << endl;
    }
   }

    return 0;
}

