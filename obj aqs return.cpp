//pass obj as function argument & add two obj (represent time) using non inline.
#include<iostream>
using namespace std;

class Time
{
    int hour,minute,second;
public:
    void getTime();
    void printTime();
    Time addTime(Time x);
};

void Time::getTime()
{
    (cout<<"\nEnter Hours: ",cin>>hour);
    (cout<<"Enter Minutes: ",cin>>minute);
    (cout<<"Enter Seconds: ",cin>>second);
}

void Time::printTime()
{
    (cout<<"\nHours: "<<hour);
    (cout<<"\tMinutes: "<<minute);
    (cout<<"\tSeconds: "<<second);
}

Time Time::addTime(Time x)
{
    Time y;
    y.hour = x.hour + this->hour;
    y.minute= x.minute + this->minute;
    y.second= x.second + this->second;
    return y;
}

int main()
{
    Time t1,t2,t3;
    t1.getTime();
    t1.printTime();
    t2.getTime();
    t2.printTime();
    t3=t1.addTime(t2);
    t3.printTime();
    return 0;
}
