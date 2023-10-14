//Multi level Inheritance
#include<bits/stdc++.h>
using namespace std;

class student
{
    int id;
public:
    void setID(int idx)
    {
        id=idx;
    }
    void showID()
    {
        cout<<id<<endl;
    }
};
class test: public student
{
protected:
    int sub1,sub2;
public:
    void setMarks(int a,int b)
    {
        sub1=a,sub2=b;
    }
    void showMarks()
    {
        cout<<sub1<<" "<<sub2<<endl;
    }
};
class result: public test
{
    int total;
public:
    showTotal()
    {
        total=sub1+sub2;
        cout<<total<<endl;
    }
};
int main()
{
    result t1;
    t1.setID(20);
    t1.showID();
    t1.setMarks(80,87);
    t1.showMarks();
    t1.showTotal();
}
