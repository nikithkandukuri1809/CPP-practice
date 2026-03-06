#include<iostream>
using namespace std;
int main()
{
    int n , sum=0;
    cout<<"enter the value of n :"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum =sum+i;
    }
    cout<<"sum od n natural number is :"<<sum;
    return 0;
}
