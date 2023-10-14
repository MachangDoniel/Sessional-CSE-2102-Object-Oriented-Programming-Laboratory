//Standard Template Library
//Queue

//#include<bits/stdc++.h>
#include<iostream>
#include<queue>

using namespace std;

int main()
{
    cout<<"Hello Chief"<<endl;

    queue<int> d;
    d.push(1);
    d.push(2);
    d.push(3);
    d.push(4);
    //while(d.size())
    while(!d.empty())
    {
        cout<<d.front()<<" ";
        d.pop();
    }
}
