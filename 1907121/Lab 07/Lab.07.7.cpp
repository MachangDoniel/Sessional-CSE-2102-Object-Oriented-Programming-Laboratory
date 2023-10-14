//Fill,Width,Precision,File Append

#include<bits/stdc++.h>
using namespace std;

class X
{
    char name[20];
    int cost;
public:
    void file_write()
    {
        ofstream outf("item.txt");
        outf<<"Wasif ";
        outf<<112;
        outf<<endl<<"PK ";
        outf<<118;
        outf.close();
    }
    void file_read()
    {
        ifstream inf("item.txt");
        while(!(inf.eof()))
        {
            inf>>name;
            cout<<"Name: "<<name;
            if(inf.eof()!=0)
            {
                cout<<"EOF1"<<endl;
            }
            inf>>cost;
             cout<<" Cost: "<<cost<<endl;
            if(inf.eof()!=0)
            {
                cout<<"EOF2"<<endl;
            }
        }
        inf.close();
    }
};
int main()
{
    cout<<"Hello Chief!"<<endl;
    X o1;
    o1.file_write();
    o1.file_read();
}
