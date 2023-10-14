#include<bits/stdc++.h>
using namespace std;

class Student
{
    int id;
    int marks;
    static int count;
    friend float calculate_avg(Student s1,Student s2,Student s3);
public:
    Student(){};
    Student(int num)
    {
        count++;
        id=count;
        marks=num;
    }
    void set_marks(int num)
    {
        count++;
        id=count;
        marks=num;
    }
    void show()
    {
        cout<<id<<" "<<marks<<endl;
    }
};
int Student::count;

float calculate_avg(Student s1,Student s2,Student s3)
{
    float avg=float(s1.marks+s2.marks+s3.marks)/3;
    return avg;
}

int main()
{
    Student s1(80),s2(81);
    Student s3;
    s3.set_marks(80);
    s1.show();
    s2.show();
    s3.show();
    float avg=calculate_avg(s1,s2,s3);
    cout<<avg<<endl;
    return 0;
}
