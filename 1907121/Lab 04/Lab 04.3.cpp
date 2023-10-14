//Operator Overloading
//Complex+Complex

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
    Complex operator+(Complex c)
    {
        Complex sum;
        sum.real=real+c.real;
        sum.img=img+c.img;
        return sum;
    }
};

int main()
{
    Complex c1(2,3),c2(4,5);
    Complex c3;
    c3=c1+c2;
    //c1.display();
    //c2.display();
    c3.display();
    return 0;
}
