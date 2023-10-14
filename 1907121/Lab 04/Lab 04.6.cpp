//Kascat(waterfall) function call

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
    Complex operator+(int r)
    {
        Complex sum;
        sum.real=real+r;
        sum.img=img;
        return sum;
    }
};

int main()
{
    Complex c1(2,3),c2(4,5);
    Complex c3(1,1),c4;
    c4=c1+c2+c3;
    //c4=(c1.operator+(c2)).opeartor+(c3);
    c4.display();
    return 0;
}
