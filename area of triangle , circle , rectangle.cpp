#include<iostream>
using namespace std;
#define pi 3.14
float areacircle(float radius)
{
    return pi*radius*radius;
}
float areatriangle(float base,float height)
{
    return 0.2*base*height;
}
float arearectangle(float length,float width)
{
    return length*width;
}
int main()
{
    float radius , base , height , length , width;
    cout<<"enter the radius of circle : ";
    cin>>radius;
    cout<<"the area of circle is :"<<areacircle(radius)<<endl;
    
    cout<<"enter base and height of triangle : ";
    cin>>base>>height;
    cout<<"the area of triangle is "<<areatriangle(base,height)<<endl;
    
    cout<<"enter length and width of rectangle : ";
    cin>>length>>width;
    cout<<"area of rectangle is : "<<arearectangle(length,width);
    return 0;
}
