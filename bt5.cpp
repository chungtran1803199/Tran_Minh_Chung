 #include <iostream>
using namespace std;
#include <string>
#include <stdio.h>

class employee
{
private:
    int day,month,year;
   
public:
    int etype;
    char status[20];
    employee()
    {
    day=0;
    month=0;
    year=0;
    etype;
    }
   
    void years (int c)
    {
    year=year+c;
    }


    void days(int a)
    {
        day=a;
    if (day>30)
     {
        month=month+1;
        day=day-12;
     }

    }

    void months(int b)
    {
        month=b;
        if(month>12)
        {
        year=year+1;
        month=month-12;
        }
    }
   
    void show(int type)
    {
        cout<<"Employee type: "<<endl;
        if (type==1)
        {
            cout<<"Manager"<<endl;
        }
        if(type==2)
        {
            cout<<"Secetry"<<endl;
        }
        if(type==3)
        {
            cout<<"Labour"<<endl;
        }
        cout<<"Date of Hire"<<endl;
        cout<<day<<" : "<<month<<" : "<<year<<endl;
   
   
    }
    };

int main()
{
    int em,day,month,year,type;
    employee emp[25];
    enum types{Manager,Secetary,Labour};
    cout<<"Enter number of Employee"<<endl;
    cin>>em;
    for(int e=0;e<em;e++)
    {
        cout<<"Enter status of employee"<<endl;
        cout<<"1-Manager\n";
        cout<<"2-Secetary\n";
        cout<<"3-Labour\n";
        cin>>type;

        cout<<"Enter Date Hire"<<endl;
        cout<<"Enter Day"<<endl;
        cin>>day;
        cout<<"Enter month"<<endl;
        cin>>month;
        cout<<"Enter year"<<endl;
        cin>>year;
   
    emp[e].days(day);
    emp[e].months(month);
    emp[e].years(year);
    emp[e].show(type);
    }
	}
