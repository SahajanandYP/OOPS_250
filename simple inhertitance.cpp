#include<iostream>
using namespace std;

class Vehicle
{
private:
    int speed;
public:
    void getSpeed();
    void showSpeed();
};

void Vehicle::getSpeed()
{
    (cout<<"Speed: ",cin>>speed);
}

void Vehicle::showSpeed()
{
    cout<<"With a speed of "<<speed<<"kmph."<<endl;
}

class car: public Vehicle
{
public:
    void displaybrand()
    {
        cout<<"This is Nandan's Car. ";
    }
};

int main()
{
    car nandan;
    nandan.getSpeed();
    nandan.displaybrand();
    nandan.showSpeed();
}
