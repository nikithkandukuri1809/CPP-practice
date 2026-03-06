#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter number :";
    cin>>num;
    if(num>0)
    {
        cout<<"the number is positive : "<<num<<endl;
    }
    else if(num<0)
    {
        cout<<"the number is negative :"<<num<<endl;
    }
    else
    {
        cout<<"the number is zero :"<<num<<endl;
    }
    return 0;
    
}
