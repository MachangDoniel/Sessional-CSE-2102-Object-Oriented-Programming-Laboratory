//Unary Operator

#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int real;
    int img;
public:
    Complex() {};
    Complex(int r,int i)
    {
        real=r;
        img=i;
    }
    void display()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    void operator++() //Pre_increment
    {
        real=real+1;
    }
    void operator++(int) //Post_increment
    {
        real=real+1;
    }
};

int main()
{
    Complex c1(2,3),c2(4,5);
    Complex c3(1,1);
    ++c3;
    c3.display();
    c3++;
    c3.display();
    return 0;
}
