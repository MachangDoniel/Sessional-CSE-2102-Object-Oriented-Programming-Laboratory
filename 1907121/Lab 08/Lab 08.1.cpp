//Templates

#include<bits/stdc++.h>
using namespace std;

template<class T,class U>
U getMax(T a,U b)
{
    return a>b?a:b;
}

int main()
{
    float a=5.4;
    float b=5.3,c;
    c=getMax<float,float>(a,b);
    cout<<c<<endl;
}
