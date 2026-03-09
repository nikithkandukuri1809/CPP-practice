#include<iostream>

using namespace std;

int findgcd(int a,int b)
{
    if(b==0)
    
        return a;
        
        return findgcd(b,a%b);
    
}

int main()

{
    int num1 , num2;
    
    cout<<"enter any two numbers : ";
    
    cin>>num1>>num2;
    
    int gcd =findgcd(num1,num2);
    
    cout<<"the gcd of "<<num1<<" "<<num2<<" is : "<<gcd<<endl;
    
    return 0;
    
}
