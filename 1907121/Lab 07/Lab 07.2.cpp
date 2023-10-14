//Constructors of class members are executed in the declaration order (regardless of their
//order in the initialization list).

#include<bits/stdc++.h>
using namespace std;

class A
{
    int a;
public:
    A(){cout<<"def A"<<endl;}
    A(int a)
    {
        this->a=a;
        cout<<"A through B"<<endl;
    }
    A(int a,int b)
    {
        cout<<"A through C"<<endl;
    }
};
class B: public A
{
    int b;
public:
    //B(){cout<<"def B"<<endl;}
    B(int a,int b) : A(a)
    {
        this->b=b;
        cout<<"def B"<<endl;
    }
};
class C: public A
{
public:
    //C(){cout<<"def C"<<endl;}
    C() : A(5,5)
    {
        cout<<"def C"<<endl;
    }
};
class D: public C,public B
{
public:
    //D(){cout<<"def D"<<endl;}
    D() : B(1,2),C()
    {
        cout<<"def D"<<endl;
    }
};

int main()
{
    cout<<"Hello Chief!"<<endl;
    D d;
}
