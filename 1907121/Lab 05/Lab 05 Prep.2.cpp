#include<bits/stdc++.h>
using namespace std;

class matrix
{
    int row,column,m[10][10];
public:
    matrix(){}
    matrix(int r,int c)
    {
        row=r;
        column=c;
    }
    matrix operator+(matrix mat)
    {
        matrix ans(row,column);
        int i,j;
        for(i=0;i<row;i++)
        {
            for(j=0;j<column;j++)
            {
                ans.m[i][j]=m[i][j]+mat.m[i][j];
            }
        }
        return ans;
    }
    void set_values()
    {
        int i,j;
        for(i=0;i<row;i++)
        {
            for(j=0;j<column;j++)
            {
                cin>>m[i][j];
            }
        }
    }
    void display()
    {
        int i,j;
        for(i=0;i<row;i++)
        {
            for(j=0;j<column;j++)
            {
                cout<<m[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    matrix m1(2,2),m2(2,2),m3;
    m1.set_values();
    m2.set_values();
    m3=m1+m2;
    m3.display();
    return 0;
}
