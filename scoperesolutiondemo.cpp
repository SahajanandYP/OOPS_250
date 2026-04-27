#include<iostream>
using namespace std;
int m=10;
int main()
{
    int m=20;
 {
    int k=m;
    int m=3;
    cout<<"We are in the Inner Block\n"<<"k="<<k<<endl<<"m="<<m<<endl<<"::m="<<::m<<endl;
 }
    cout<<"We are in the Outer Block\n"<<"m="<<m<<endl<<"::m="<<::m<<endl;
}
