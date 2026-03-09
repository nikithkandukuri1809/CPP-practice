#include<iostream>
using namespace std;
int cube(int number)
{
    return number * number*number;
}
int main()
{
    int num;
    cout<<"enter a number :";
    cin>>num;
    int result = cube(num);
    cout<<"cube of given number is :"<<result;
}
