#include<bits/stdc++.h>
using namespace std;

template<class T>
T get(T a,T b)
{
    return a>b?a:b;
}

int main()
{
    int i1=4,i2=6,i3;
    float f1=4.5,f2=6.1,f3;
    char c1='a',c2='b',c3;
    i3=get(i1,i2);
    f3=get(f1,f2);
    c3=get(c1,c2);
    cout<<i3<<" "<<f3<<" "<<c3<<endl;
}
