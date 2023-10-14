//Various Types of Constructor
#include<bits/stdc++.h>
using namespace std;

class Student
{
private:
    int roll;
    string name;
public:
    Student()
    {
        cout<<"Default Constructor"<<endl;
    }
    Student(int r,string s)
    {
        roll=r;
        name=s;
        cout<<"Parameterized Constructor"<<endl;
    }
    void view()
    {
        cout<<roll<<" "<<name<<endl;
    }
};

int main()
{
    Student s1,s2(1907121,"Doniel");
    s2.view();
}
