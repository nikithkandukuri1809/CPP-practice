#include<iostream>
using namespace std;
class primechecker
{
    private :
    int number;
    public :
    void setnumber(int num)
    {
        number = num;
    }
    bool isprime()
    {
        if(number<=1)
        {
            return false;
        }
        for(int i=2;i*i<=number;i++)
        {
            if(number % i == 0 )
            {
                return false;
            }
        }
        return true;
    }
};
int main()
{
    primechecker check;
    int num;
    cout<<"enter a number to check its prime or not : ";
    cin>>num;
    check.setnumber(num);
    if(check.isprime())
    {
        cout<<num<<" is a prime number . "<<endl;
    }
    else
    {
        cout<<num<<" is not a prime number . "<<endl;
    }
    return 0;
}
