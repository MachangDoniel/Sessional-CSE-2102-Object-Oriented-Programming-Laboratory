#include<bits/stdc++.h>
using namespace std;

class Person
{
    static int cnt;
    int id;
    string name;
    int roll;
public:
    Person()
    {
        cnt++;
        id=cnt;
    }
    Person(string s,int n)
    {
        cnt++;
        id=cnt;
        name=s;
        roll=n;
    }
    Person(Person &p)
    {
        cnt++;
        id=cnt;
        name=p.name;
        roll=p.roll;
    }
    bool operator==(Person p)
    {
        if(name==p.name && roll==p.roll) return true;
        else return false;
    }
    void set_val(string s,int n)
    {
        name=s;
        roll=n;
    }
    void show()
    {
        cout<<id<<" "<<name<<" "<<roll<<endl;
    }
};
int Person:: cnt;

int main()
{
    Person p1("Nibir",43);
    p1.show();
    Person p2=p1;
    p2.show();
    if(p1==p2)
    {
        Person p3,p4;
        p3.set_val("Talha",39);
        p3.show();
    }
}
