//Templates 2

#include<bits/stdc++.h>
using namespace std;

template<class T,class Q>
class Mypair
{
    T a;
    Q b;
public:
    Mypair(T i,Q j)
    {
        a=i;
        b=j;
    }
//    Q Get()
//    {
//        cout<<"Function Inside definition"<<endl;
//        return a>b?a:b;
//    }
    Q Get();
};
template<class T,class Q>
Q Mypair<T,Q> :: Get()
{
    cout<<"Function Outside definition"<<endl;
    return a>b?a:b;
}

int main()
{
    cout<<"Hello Chief"<<endl;
    Mypair<int,float> a1(3,4.6);
    cout<<a1.Get()<<endl;
}
