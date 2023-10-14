//Destructor Some Scenario
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
    ~Student()
    {
        cout<<"Destructor"<<endl;
    }
};

int main()
{
    Student s1;
    {
        Student s2;
    }
    Student s3;
    return 0;
}
