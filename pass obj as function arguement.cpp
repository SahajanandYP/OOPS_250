//pass obj as function argument & add two obj (represent time) using non inline.
#include<iostream>
using namespace std;

class Time
{
    int hour,minute,second;
public:
    void getTime();
    void printTime();
    void addTime(Time x,Time y);
};

void Time::getTime()
{
    (cout<<"\n\nEnter Hours: ",cin>>hour);
    (cout<<"Enter Minutes: ",cin>>minute);
    (cout<<"Enter Seconds: ",cin>>second);
}

void Time::printTime()
{
    (cout<<"\n\nHours: "<<hour);
    (cout<<"\tMinutes: "<<minute);
    (cout<<"\tSeconds: "<<second);
}

void Time::addTime(Time x, Time y)
{
    hour = x.hour + y.hour;
    if(x.minute+y.minute >=60)
    {
        hour=hour+1;
        minute= x.minute + y.minute - 60;
    }
    else
    {
        minute= x.minute + y.minute;
    }
    if(x.second+y.second >=60)
    {
        minute=minute+1;
        second= x.second + y.second - 60;
    }
    else
    {
        second= x.second + y.second;
    }

}

int main()
{
    Time t1,t2,t3;
    t1.getTime();
    t1.printTime();
    t2.getTime();
    t2.printTime();
    t3.addTime(t1,t2);
    cout<<"\n\nAfter adding : ";
    t3.printTime();
    return 0;
}
