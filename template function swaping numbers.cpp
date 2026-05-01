#include<iostream>
using namespace std;
template<typename T>
void swapdata(T&a,T&b)
{
   T temp;
   temp = a;
   a = b;
   b = temp;
}
int main()
{
    int x = 10,y=20;
    cout<<"before swapping : x = "<<x<<" , y = "<<y<<endl;
    swapdata(x,y);
    cout<<"after  swapping : x = "<<x<<" , y = "<<y<<endl;
    
    float m = 1.5 , n = 2.5;
    cout<<"before swapping : m = "<<m<<" , n = "<<n<<endl;
    swapdata(m,n);
    cout<<"after  swapping : m = "<<m<<" , n = "<<n<<endl;
}
