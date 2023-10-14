//Friend Function

#include<bits/stdc++.h>
using namespace std;

class B; // forward declaration
class A
{
    int x=5;
    friend void max_value(A a,B b);
};
class B
{
    int x=10;
    friend void max_value(A a,B b);
};

void max_value(A a,B b)
{
    //(a.x>=b.x)?cout<<"A is max":cout<<"B is max"; //Ternary Operator
    if(a.x>=b.x) cout<<"A is max";
    else cout<<"B is max";
    cout<<endl;

}
int main()
{
    A a;
    B b;
    max_value(a,b);
    return 0;
}
