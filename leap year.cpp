#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter a year : "<<endl;
    cin>>year;
    if((year%4==0&&year%100!=0)||year%400==0)
    {
        cout<<"year is leap year :"<<year;
    }
    else
    {
        cout<<" given year is not a leap year";
    }
    return 0;
}
