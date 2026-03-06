#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number : ";
    cin>>num;
    bool isprime = true;
    if(num<=1)
    {
        isprime = false;
    }
    else
    {
        for(int i=2;i*i<=num;i++)
        {
            if(num%i==0)
            {
                isprime = false;
                break;
            }
        }
    }
    if(isprime)
    {
        cout<<num<<" is a prime number  "<<endl;
    }
    else
    {
        cout<<num<<" is not a prime number  "<<endl;
    }
    return 0;
    
}
