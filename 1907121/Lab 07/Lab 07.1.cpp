//Base Class Constructor

#include<bits/stdc++.h>
using namespace std;

class A
{
public:
    A(){cout<<"A";}
};
class B: public A
{
public:
    B(){cout<<"B";}
};
class C: public A
{
public:
    C(){cout<<"C";}
};
class E: virtual public A
{
public:
    E(){cout<<"E";}
};
class D: public B,public C
{
public:
    D(){cout<<"D";}
};

int main()
{
    cout<<"Hello Chief!"<<endl;
    D d;
}
