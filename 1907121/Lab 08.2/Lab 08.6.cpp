//Standard Template Library
//Stack

//#include<bits/stdc++.h>
#include<iostream>
#include<stack>

using namespace std;

int main()
{
    cout<<"Hello Chief"<<endl;

    stack<int> d;
    d.push(1);
    d.push(2);
    d.push(3);
    d.push(4);
    //while(d.size())
    while(!d.empty())
    {
        cout<<d.top()<<" ";
        d.pop();
    }
}
