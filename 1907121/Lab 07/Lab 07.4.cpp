//File Handling,Write

//#include<bits/stdc++.h>
#include<iostream>
#include<fstream>

using namespace std;

class X
{
public:
    void fw()
    {
        ofstream f("item.txt");
        f<<"Doniel"<<endl;
        f<<121<<endl;
        f.close();
    }
};

int main()
{
    cout<<"Hello Chief!"<<endl;
    X o1;
    o1.fw();
}
