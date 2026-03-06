#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cout<<"enter a string :";
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        str[i]=tolower(str[i]);
    }
    string revstr = str;
    reverse(revstr.begin(),revstr.end());
    if(str==revstr)
    {
        cout<<str<<" is a palindrome ."<<endl;
    }
    else
    {
        cout<<str<<" is not a palindrome ."<<endl;
    }
    return 0;
}
