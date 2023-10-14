//Destructor
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
    return 0;
}
