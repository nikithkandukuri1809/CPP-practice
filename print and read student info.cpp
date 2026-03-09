#include<iostream>
#include<string>
using namespace std;
class student
{
    private :
    string name;
    int age;
    int rollnumber;
    public:
    void readstudentinfo()
    {
        cout<<"enter student name : ";
        cin>>name;
        cout<<"enter student age : ";
        cin>>age;
        cout<<"enter roll number : ";
        cin>>rollnumber;
    }
    void printstudentinfo()
    {
        cout<<"student name : "<<name<<endl;
        cout<<"student age : "<<age<<endl;
        cout<<"student roll number : "<<rollnumber<<endl;
    }
}
int main()
{
    student s1;
    s1.readstudentinfo();
    s1.printstudentinfo();
    
    return 0;
    
}
