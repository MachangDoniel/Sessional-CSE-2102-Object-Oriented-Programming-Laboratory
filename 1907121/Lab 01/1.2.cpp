//scope regulation operator

#include<bits/stdc++.h>
using namespace std;


int m=10;
int main()
{
    int m=20;
    {
        int m=30;
        cout<<m<<endl;
        cout<<::m<<endl;
    }
    cout<<m<<endl;
    cout<<::m<<endl;
}
