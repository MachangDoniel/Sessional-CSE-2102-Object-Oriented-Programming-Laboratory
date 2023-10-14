//Dynamically declared value

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *p=new int;
    float *q=new float(7.5);
    *p = 25;
    cout<<"*p = "<<*p<<endl;
    cout<<"*q = "<<*q<<endl;
    delete p;
    delete q;
    cout<<"*p = "<<*p<<endl;
    cout<<"*q = "<<*q<<endl;
    return 0;
}
