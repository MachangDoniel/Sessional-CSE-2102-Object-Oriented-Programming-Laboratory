//File Handling,Read

#include<bits/stdc++.h>
using namespace std;

class X
{
    string name;
    int cost;
public:
    void fr()
    {
        ifstream f("item.txt");
        while(f.eof()==0)
        {
            f>>name;
            f>>cost;
            cout<<name<<" "<<cost<<endl;
        }
    }
};
int main()
{
    cout<<"Hello Chief!"<<endl;
    X o1;
    o1.fr();
}
