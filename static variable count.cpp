//static variable count and display for 3 objects
#include<iostream>
using namespace std;

class demo
{
    static int count;
public:
    void getCount()
    {
        cout<<"\nCount= "<<++count;
    }
};

int demo::count;
int main()
{
    demo d1,d2,d3;
    d1.getCount();
    d2.getCount();
    d3.getCount();
    return 0;
}
