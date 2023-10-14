//Standard Template Library
//Vector

//#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    cout<<"Hello Chief"<<endl;

    vector<int> v;
//    v.push_back(1);
//    v.push_back(2);
//    v.push_back(3);
//    v.push_back(4);
//    v.pop_back();
//    v[1]=10;
    //for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    //cout<<endl;

    //vector<int>:: iterator it;
    //for(it=v.begin();it!=v.end();it++) cout<<*it<<" ";
    //cout<<endl;

    for(int i=0;i<99;i++)
    {
        v.push_back(i);
        cout<<v.size()<<" "<<v.capacity()<<endl;
    }

    cout<<v.max_size()<<endl;
}
