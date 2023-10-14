//Default argument in function

#include<bits/stdc++.h>
using namespace std;

int mul(int a=3,int b=2)
{
    return a*b;
}

int main()
{
    cout<<mul(5,6)<<endl;
    cout<<mul(7)<<endl;
    cout<<mul()<<endl;
}
