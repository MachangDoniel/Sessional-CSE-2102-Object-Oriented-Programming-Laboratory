//Function Overloading

#include<bits/stdc++.h>
using namespace std;

//int mul(int a,int b)
//{
//    return a*b;
//}

//int mul(int a,int b,int c)
//{
//    return a*b*c;
//}

int mul(int a,int b,int c=10)
{
    return a*b*c;
}

int main()
{
    cout<<mul(5,6)<<endl;
    cout<<mul(9,6,5)<<endl;
}
