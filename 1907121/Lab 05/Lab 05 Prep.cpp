#include<bits/stdc++.h>
using namespace std;

class B;
class A
{
    static int count;
    int id;
    float marks;
    friend void set_avg(A &a1,A &a2,B &b1);
    friend class B;
public:
    A(){}
    A(float n)
    {
        count++;
        id=count;
        marks=n;
    }
    void set_values(float n)
    {
        count++;
        id=count;
        marks=n;
    }
    void display()
    {
        cout<<id<<" "<<marks<<endl;
    }
};
int A::count;

class B
{
    static int count;
    int id;
    float marks;
    friend void set_avg(A &a1,A &a2,B &b1);
public:
    B(int n)
    {
        count++;
        id=count;
        marks=n;
    }
    void display()
    {
        cout<<id<<" "<<marks<<endl;
    }
};
int B::count;

void set_avg(A &a1,A &a2,B &b1)
{
    float avg=float(a1.marks+a2.marks+b1.marks)/3;
    a1.marks=a2.marks=b1.marks=avg;
}

int main()
{
    A a1(70),a2;
    a2.set_values(80);
    B b1(70);
    set_avg(a1,a2,b1);
    a1.display();
    a2.display();
    b1.display();
    return 0;
}
