#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    a.assign("Hello, World!");
    cout<<a<<endl;
    a.assign("Hello, Universe!",7,8);
    cout<<a<<endl;
    string b="C++ Programming";
    a.assign(b,4,11);
    cout<<a<<endl;
    return 0;
}
