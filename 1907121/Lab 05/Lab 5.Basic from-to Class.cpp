//Basic from/to class

#include<bits/stdc++.h>
using namespace std;

class Int
{
    int i;
public:
    Int(){};
    Int(int n)
    {
        i=n;
    }
    void show()
    {
        cout<<i<<endl;
    }
    void operator=(int n)
    {
        i=n;
    }
    operator int()
    {
        int n=i;
        return n;
    }
};

int main ()
{
    int i=10;
    Int i1;
    i1=i;
    i1.show();
    int i2;
    i2=i1;
    cout<<i2<<endl;
}
