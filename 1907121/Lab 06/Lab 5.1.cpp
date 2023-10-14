//Class to Basic
#include<bits/stdc++.h>
using namespace std;

class Vector
{
    int v[2];
public:
    Vector(int i,int j)
    {
        v[0]=i;
        v[1]=j;
        cout<<"Parameterized Constructor Called."<<endl;
    }
    operator float()
    {
        cout<<"Operator Called."<<endl;
        float m=sqrt(v[0]*v[0]+v[1]*v[1]);
        return m;
    }
};

int main()
{
    Vector v1(2,3);
    float mag=v1;
    cout<<mag<<endl;
}
