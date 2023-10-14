//Function inside & outside of class

#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int marks;
    void setmark(int r,int m)
    {
        roll=r;
        marks=m;
    }
    void show();
};

void Student::show()
{
    cout<<roll<<" "<<marks<<endl;
}

int main()
{
    Student s1;
    s1.setmark(1907121,94);
    s1.show();
}
