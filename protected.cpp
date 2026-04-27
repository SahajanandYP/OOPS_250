#include<iostream>
using namespace std;

class Vehicle
{
protected:
    int speed;
};

class car: public Vehicle
{
public:
    void getSpeed();
    void showSpeed();
    void displaybrand()
    {
        cout<<"This is Nandan's Car. ";
    }
};

void car::getSpeed()
{
    (cout<<"Speed: ",cin>>speed);
}

void car::showSpeed()
{
    cout<<"With a speed of "<<speed<<"kmph."<<endl;
}

int main()
{
    car nandan;
    nandan.getSpeed();
    nandan.displaybrand();
    nandan.showSpeed();
}
