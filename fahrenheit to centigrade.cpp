#include<iostream>
using namespace std;
float ftoc (float f)
{
    return (f-32)*5.0/9.0;
}
float ctof (float c)
{
    return (c*9.0/5.0)+32;
}
int main()
{
    float f,c;
    cout<<"enter temperature in fahrenheit :";
    cin>>f;
    cout<<"temperature in centigrade is : "<<ftoc(f)<<endl;
    
    cout<<"enter temperature in centigrade :";
    cin>>c;
    cout<<"temperature in fahrenheit is :"<<ctof(c);
    return 0;
}
