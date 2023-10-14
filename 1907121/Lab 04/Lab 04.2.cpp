//Friend Class

#include<bits/stdc++.h>
using namespace std;

class B; // forward declaration
class A
{
    int x=5;
//public:
    friend class B;
};
class B
{
    int x=10;
public:
    void display(A a)
    {
        cout<<x<<endl;
        cout<<a.x<<endl;
    }
};

int main()
{
    A a;
    B b;
    b.display(a);
    return 0;
}

