//Copy Constructor Automatically
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
//    Student (Student &x)
//    {
//        roll=x.roll;
//        name=x.name;
//        cout<<"Copy Constructor"<<endl;
//    }
    void view()
    {
        cout<<roll<<" "<<name<<endl;
    }
};

int main()
{
    Student s1(1907121,"Doniel");
    //Student s2(s1);
    Student s2=s1;
    s2.view();
}
