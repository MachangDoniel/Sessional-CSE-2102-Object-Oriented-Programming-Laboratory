#include<bits/stdc++.h>
using namespace std;

class Polygon
{
//protected:
    int height,width;
public:
    Polygon(int a,int b)
    {
        height=a;
        width=b;
    }
    int get_height()
    {
        return height;
    }
    int get_width()
    {
        return width;
    }
    virtual void printArea()=0;
};
class Rectangle: public Polygon
{
    public:
    Rectangle(int h,int w):Polygon(h,w)
    {
    }
    void printArea()
    {
        cout<<get_height()*get_width()<<endl;
    }
};
class Triangle: public Polygon
{
public:
    Triangle(int h,int w):Polygon(h,w)
    {
    }
    void printArea()
    {
        cout<<(get_height()*get_width())/2<<endl;
    }
};

int main()
{
    Polygon *poly;
    int check=0,h=0,w=0;
    cout<<"Enter height and width:";
    cin>>h>>w;
    if(check==0) poly=new Rectangle(h,w);
    else poly=new Triangle(h,w);
    poly->printArea();
    delete poly;
    return 0;
}
