//Class to Class
#include<bits/stdc++.h>
using namespace std;
class Min
{
    public:
    int mn;

    Min(){ cout<<"Default Constructor Called for class Min."<<endl;};
    Min(int tm)
    {
        mn=tm;
        cout<<"Parameterized Constructor Called for class time."<<endl;
    }
};
class Time
{
    int h,m;
public:
    Time(){ cout<<"Default Constructor Called for class Time."<<endl;};
    Time(Min tm)
    {
        h=tm.mn/60;
        m=tm.mn%60;
        cout<<"Parameterized Constructor Called for class time."<<endl;
    }
    void operator=(Min tm)
    {
        h=tm.mn/60;
        m=tm.mn%60;
        cout<<"Operator= Called for class time."<<endl;
    }
    void display()
    {
        cout<<h<<": "<<m<<endl;
    }
};

int main()
{
    Min tot_min(65);
    Time t1=tot_min;
    t1.display();

    //Min tot_min2;
    Min tot_min2(127);
    Time t2;
    t2=tot_min2;
    t2.display();
}
