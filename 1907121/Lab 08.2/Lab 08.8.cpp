//Standard Template Library
//Priority Queue

//#include<bits/stdc++.h>
#include<iostream>
#include<queue>

using namespace std;

int main()
{
    cout<<"Hello Chief"<<endl;

    priority_queue<int> d;
    d.push(1);
    d.push(4);
    d.push(3);
    d.push(2);
    //while(d.size())
    while(!d.empty())
    {
        cout<<d.top()<<" ";
        d.pop();
    }
}
