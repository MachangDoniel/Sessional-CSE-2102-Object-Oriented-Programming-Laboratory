//Unary Operator Overloading

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
    void operator -()
    {
        i=-i;
    }
    Int operator++()
    {
        i++;
    }
    Int operator++(int)
    {
        i++;
    }
    Int operator--()
    {
        i++;
    }
    Int operator--(int)
    {
        i++;
    }
};

int main ()
{
    Int i(2),i2(5),i3(9),i4(7),i5(4);
    i.show();
    -i;
    i.show();
    i2.show();
    i2++;
    i2.show();
    i3.show();
    ++i3;
    i3.show();
    i4.show();
    i4++;
    i4.show();
    i5.show();
    ++i5;
    i5.show();
}
