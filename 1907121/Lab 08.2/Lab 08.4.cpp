//Standard Template Library
//2D vector

//#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    cout<<"Hello Chief"<<endl;
    int n=2,m=2;
    vector<vector<int>> v;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int in;
            cin>>in;
            v[i].push_back(in);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<v[i][j]<<endl;
        }
    }
}
