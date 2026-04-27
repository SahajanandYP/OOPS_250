#include<iostream>
using namespace std;

class Rectangle
{
public:
    int lenght,width;
    void display();
};

void Rectangle::display()
{
    int area=lenght*width;
    cout<<"Area: "<<area;
}

int main()
{
    Rectangle r1;
    (cout<<"Enter Length: ",cin>>r1.lenght);
    (cout<<"Enter Width: ",cin>>r1.width);
    r1.display();
    return 0;
}
