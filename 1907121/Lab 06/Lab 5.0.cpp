//Basic to Class
#include<bits/stdc++.h>
using namespace std;

class Time
{
    int h,m;
public:
    Time(){ cout<<"Default Constructor Called."<<endl;};
    Time(int tm)
    {
        h=tm/60;
        m=tm%60;
        cout<<"Parameterized Constructor Called."<<endl;
    }
    void operator=(int tm)
    {
        h=tm/60;
        m=tm%60;
        cout<<"Operator= Called."<<endl;
    }
    void display()
    {
        cout<<h<<": "<<m<<endl;
    }
};

int main()
{
    int tot_min=65,tot_min2=127;
    Time t1=tot_min;
    //Time t1(tot_min);
    t1.display();

    Time t2;
    t2=tot_min2;
    t2.display();
}
