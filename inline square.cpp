#include<iostream>
using namespace std;
inline int square(int a)
{
    return a*a;
}
int main()
{
    int num;
    cout<<"enter a number for square : ";
    cin>>num;
    cout<<"square of "<<num<<" is : "<<square(num);
    return 0;
}
