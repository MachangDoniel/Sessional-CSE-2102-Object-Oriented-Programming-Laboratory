//Binary Operator Overloading

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
    Int operator+(Int x)
    {
        Int temp;
        temp.i=i+x.i;
        return temp;
    }
    Int operator/(Int x)
    {
        Int temp;
        temp.i=i/x.i;
        return temp;
    }
};

int main ()
{
    Int i(15),i2(5),i3;
    i3=i/i2;
    i.show();
    i2.show();
    i3.show();
}
