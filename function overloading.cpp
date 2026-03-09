#include<iostream>
using namespace std;

double volume(double side)
{
    return side*side*side;
}
double volume(double radius , double height)
{
    return 3.14*radius*radius*height;
}
double volume(double radius , bool isphere)
{
    return (4.0/3.0*3.14*radius*radius*radius);
    
}
int main()
{
    double side , radius , height ;
    
    cout<<"enter side length of cube : ";
    cin>>side;
    cout<<"volume of cube : "<<volume(side)<<endl;
    
    cout<<"enter radius and height of cylinder :";
    cin>>radius>>height;
    cout<<"volume of cylinder : "<<volume(radius,height)<<endl;
    
    cout<<"enter radius of sphere ";
    cin>>radius;
    cout<<"volume of sphere : "<<volume(radius,true);
    
    return 0;
    
}
