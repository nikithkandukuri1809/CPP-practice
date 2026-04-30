#include<iostream>
using namespace std;
template<class T>
class calculator 
{
    T a,b;
    public :
    void getdata()
    {
        cout<<"enter two numbers : ";
        cin>>a>>b;
    }
    void add()
    {
        cout<<"addition : "<<a+b<<endl;
    }
    void subtract()
    {
        cout<<"subtraction :"<<a-b<<endl;
    }
    void multiply()
    {
        cout<<"multiplication :"<<a*b<<endl;
    }
    void divide()
    {
        if(b!=0)
        {
            cout<<"division :"<<a/b<<endl;
        }
        else
        {
            cout<<"division with 0 is not possible.."<<endl;
        }
    }
};
int main()
{
    cout<<"___Calculator___ "<<endl;
    calculator<int> calc ;
    calc.getdata();
    calc.add();
    calc.subtract();
    calc.multiply();
    calc.divide();
    cout<<"DECIMAL calculator : "<<endl;
    calculator<float>calc2;
    calc2.getdata();
    calc2.add();
    calc2.subtract();
    calc2.multiply();
    calc2.divide();
}
