//Standard Template Library
//Deque

//#include<bits/stdc++.h>
#include<iostream>
#include<deque>

using namespace std;

int main()
{
    cout<<"Hello Chief"<<endl;

    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_front(1);
    d.push_front(2);
    d.push_front(3);
    d.push_front(4);
//    deque<int>:: iterator it;
//    for(it=d.begin();it!=d.end();it++) cout<<*it<<" ";
//    cout<<endl;
    for(int i=0;i<d.size();i++) cout<<d[i]<<" ";
    cout<<endl;
}
