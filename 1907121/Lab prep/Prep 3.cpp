#include<bits/stdc++.h>
#include<fstream>
using namespace std;

template <class T,class U>
class Pair
{
    T first;
    U second;
public:
    void sets(T s, U a)
    {
        first=s;
        second=a;
    }
    Pair getfirst()
    {
        return *this;
    }
    Pair* getsecond()
    {
        return this;
    }
    void writemax(Pair s)
    {
        ofstream outf;
        outf.open("max.txt",ios::app);
        if(first>s.first)
            outf << first << " " << second << endl;
        else
            outf << s.first << " " << s.second << endl;
    }
    void writemax(Pair *s)
    {
        ofstream outf;
        outf.open("max.txt",ios::app);
        if(second>s->second)
            outf << first << " " << second;
        else
            outf << s->first << " " << s->second;
    }
};

void readmax(){
    ifstream inf("max.txt");
    string a;
    int b;
    while(inf >> a >> b){
        cout << a << " " << b << endl;
    }
}

int main()
{
    Pair<string,int>marks[2];
    marks[0].sets("A",95);
    marks[1].sets("B",85);

    marks[0].writemax(marks[1].getfirst());
    marks[0].writemax(marks[1].getsecond());

    readmax();
    return 0;
}
