#include<iostream>
using namespace std;
int main()
{
    int a, b,temp;
    cout<<"enter first number :"<<endl;
    cin>>a;
    cout<<"enter second number :"<<endl;
    cin>>b;
    cout<<"before swapping :"<<endl;
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swapping :"<<endl;
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;
    return 0;
}
