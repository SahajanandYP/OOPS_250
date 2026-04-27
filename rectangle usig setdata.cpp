#include<iostream>
using namespace std;

class Rectangle
{
private:
    int lenght,width;

public:
    void setData(int l,int w);
    int area();
};

void Rectangle::setData(int l,int w)
{
    lenght = l;
    width = w;
}

int Rectangle::area()
{
    int area=lenght*width;
    cout<<"Area: "<<area;
}

int main()
{
    Rectangle r1;
    r1.setData(10,10);
    r1.area();
    return 0;
}
