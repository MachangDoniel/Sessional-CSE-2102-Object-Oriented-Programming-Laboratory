//Standard Template Library
//Map

//#include<bits/stdc++.h>
#include<iostream>
#include<map>

using namespace std;

int main()
{
    cout<<"Hello Chief"<<endl;

    //map<key,value>;
    map<string,int>mp;
    mp["Allen"]=95;
    mp["Helen"]=85;
    mp["Cho"]=75;
    mp["Allen"]=81;
//    map<string,int>:: iterator it;
//    for(it=mp.begin();it!=mp.end();it++) cout<<it->first<<" "<<it->second<<endl;
//    cout<<mp["Helen"]<<endl;
    for(auto it : mp) cout<<it.first<<" "<<it.second<<endl;
    cout<<mp["Helen"]<<endl;
}
