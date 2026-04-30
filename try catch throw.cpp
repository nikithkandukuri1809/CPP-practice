#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter any two numbers : ";
    cin>>a>>b;

    try
    {
        if(b==0)
        {
            throw b;
            
        }
        cout<<"division of a/b = "<<a/b<<endl;
    }
    catch(int x)
    {
        cout<<"error : division by zero is not allowed "<<endl;
    }
    cout<<"program continues after exception handling "<<endl;
    return 0;
}
