//Fill,Width,Precision

#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout.fill('.');
    cout.width(10);
    cout.precision(6);
//    cout.setf(ios::left,ios::adjustfield);
    cout<<sqrt(2)<<endl;
    cout.fill('*');
    cout.width(10);
    cout.precision(5);
    cout.setf(ios::left,ios::adjustfield);
    cout<<sqrt(3)<<endl;
}
