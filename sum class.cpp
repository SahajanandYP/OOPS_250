#include<iostream>
using namespace std;
class Add
{
    public:
       int a,b,sum;
       void getnum()
       {
        cout<<"Enter the Two numbers: ";
        cin>>a>>b;
       }
       void calculate()
       {
        sum=a+b;
       }
       void display()
       {
        cout<<"SUM= "<<sum;
       }
}

int main()
{
    Add obj;
    obj.getnum();
    obj.calculate();
    obj.display();
    return 0;
}