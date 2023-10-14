//Multiple Inheritance
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
        cout<<"Id: "<<id<<endl;
    }
};
class test: public virtual student
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
        cout<<"Mark: "<<sub1<<" "<<sub2<<endl;
    }
};
class sports: public virtual student
{
    int score;
public:
    void setScore(int s)
    {
        score=s;
    }
    void showScore()
    {
        cout<<"Score: "<<score<<endl;
    }
};

class result: public test,public sports
{
    int total;
public:
    showTotal()
    {
        total=sub1+sub2;
        cout<<"Total: "<<total<<endl;
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
    t1.setScore(100);
    t1.showScore();
}
