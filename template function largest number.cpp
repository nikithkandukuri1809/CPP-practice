#include<iostream>
using namespace std;
template<typename T>
T findmax(T&a,T&b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int x=10,y=20;
    cout<<"largest number = "<<findmax(x,y)<<endl;
    
    float m=1.4,n=1.3;
    cout<<"largest float = "<<findmax(m,n)<<endl;
    
    char k='a',s='A';
    cout<<"largest char = "<<findmax(k,s)<<endl;
    
}
