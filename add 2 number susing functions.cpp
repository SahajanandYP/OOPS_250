#include<iostream>
using namespace std;

int add(int a, int b)
{
    int result=a+b;
    return result;
}

void display(int sum)
{
    cout<<"Sum = "<<sum<<endl;
}

int main()
{
    int a,b,sum;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    sum=add(a,b);
    display(sum);
    return 0;
}
