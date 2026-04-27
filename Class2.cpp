#include<iostream>
using namespace std;

class Car
{
public:
    int speed;
    string brand;
    void display()
    {
        cout<<"Brand: "<<brand<<endl;
        cout<<"Speed: "<<speed<<"km/hr"<<endl;
    }
};

int main()
{
    Car c1;
    c1.brand="Volkswagen";
    c1.speed=105;
    c1.display();
    return 0;
}
