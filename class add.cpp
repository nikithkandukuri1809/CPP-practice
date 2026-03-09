#include<iostream>
using namespace std;
class add
{
    private :
    int num1,num2;
    public :
    void setnumbers(int a,int b)
    {
        num1 = a;
        num2 = b;
    }
    int getsum()
    {
        return num1+num2;
    }
};
int main()
{
    add addition;
    int a,b;
    cout<<"enter two numbers : ";
    cin>>a>>b;
    addition.setnumbers(a,b);
    cout<<"sum of two numbers is : "<<addition.getsum();
    return 0;
    
}
