#include<iostream>
using namespace std;
int addition(int a,int b)
{
    return a + b;
}
int subtraction(int a,int b)
{
    return a - b;
}
int multiply(int a,int b)
{
    return a * b;
}
int division(int a,int b)
{
    if(b!=0)
    {
        return a/b;
    }
    else
    {
        cout<<"cant divide with 0";
    }
}
int mod(int a ,int b)
{
    return a%b;
}
int main()
{
    int num1,num2;
    char options;
    cout<<"enter two numbers : "<<endl;
    cin>>num1>>num2;
    cout<<"select an option (+,-,*,/,%) "<<endl;
    cin>>options;
    switch(options)
    {
        case '+':
        cout<<"result : "<<addition(num1,num2);
        break;
        
        case '-':
        cout<<"result :"<<subtraction(num1,num2);
        break;
        
        case '*':
        cout<<"result :"<<multiply(num1,num2);
        break;
        
        case '/':
        cout<<"result :"<<division(num1,num2);
        break;
        
        case '%':
        cout<<"result :"<<mod(num1,num2);
        break;
        
        default :
        cout<<"enter a correct option !";
        break;
        
    }
    return 0;
}
