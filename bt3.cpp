#include <iostream>
using namespace std;
class time
{ private:
                int hours,minutes,seconds;
public:
                time(){
                                hours=0;
                                minutes=0;
                                seconds=0;
                }
                time(int a,int b,int c)
                {              while(c>=60)
                                {              c-=60;
                                                minutes+=1;
                                }
                                minutes=minutes+1;
                                seconds=c;
                                while(b>=60)
                                {              b-=60;
                                                hours+=1;
                                }
                                hours=hours+1;
                                minutes=b;
                                hours=a;
                }
                void add(time t1,time t2)
                {           seconds=t1.seconds+t2.seconds;
                                while(seconds>=60)
                                {            seconds-=60;
                                                minutes+=1;     }
                                minutes=t1.minutes+t2.minutes;
                                minutes=minutes+1;
                                while(minutes>=60)
                                {            minutes-=60;
                                                hours+=1;        }
                                hours=t1.hours+t2.hours;
                                hours=hours+1;
                }
                void showtime()
                {    cout<<"time 1 is 12:28:32 and time 2 is 7:44:55 ";
                     cout<<"\nthe sum of both times is"<<hours<<":"<<minutes<<":"<<seconds<<".\n";
                }};
int main()
{
                time t1(12,28,32);
                time t2(7,44,55);
                time t3;
                t3.add(t1,t2);
                t3.showtime();
}
