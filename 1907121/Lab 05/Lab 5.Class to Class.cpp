//Class to Class

#include<bits/stdc++.h>
using namespace std;

class Int
{
public:
    int i;
    Int(){};
    Int(int n)
    {
        i=n;
    }
    void show()
    {
        cout<<i<<endl;
    }
};
class Long
{
    int i;
public:
    Long(){};
    Long(int n)
    {
        i=n;
    }
    void show()
    {
        cout<<i<<endl;
    }
    void operator=(Int Ok)
    {
        i=Ok.i;
    }
};

int main ()
{
    Int i1(4);
    Long l1(5);
    i1.show();
    l1.show();
    l1=i1;
    i1.show();
    l1.show();
}
