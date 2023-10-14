//Constructor
#include<bits/stdc++.h>
using namespace std;

class Student
{
private:
    int roll;
    string name;
public:
//    void setvalue(int r,string s)
//    {
//        roll=r;
//        name=s;
//    }
    Student(int r,string s)
    {
        roll=r;
        name=s;
        cout<<roll<<" "<<name<<endl;
    }
    void view()
    {
        cout<<roll<<" "<<name<<endl;
    }
};

int main()
{
    Student s1(1907121,"Doniel");
    //s1.setvalue(1907121,"Doniel");
    //s1.view();
}
