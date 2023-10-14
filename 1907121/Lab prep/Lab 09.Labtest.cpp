#include<bits/stdc++.h>
using namespace std;

class score
{
    int id;
    float marks;
public:
    score(int n,float f)
    {
        id=n;
        marks=f;
    }
    int getId()
    {
        return id;
    }
    float getMarks()
    {
        return marks;
    }
};

void writeFile(map<string,score*>stud)
{
    ofstream out;
    out.open("text.txt");
    for(auto it:stud)
    {
        out<<it.first<<" "<<it.second->getId()<<" "<<it.second->getMarks()<<endl;
    }
    out.close();
}

void displayFile()
{
    ifstream in("text.txt");
    string name,maxname;
    int id,maxid;
    float marks,maxmarks;
    in>>maxname>>maxid>>maxmarks;
    while(in>>name>>id>>marks)
    {
        if(marks>maxmarks)
        {
            maxname=name;
            maxid=id;
            maxmarks=marks;
        }
    }
    cout<<maxname<<" "<<maxid<<" "<<maxmarks<<endl;
}

int main()
{
    map<string,score*>students;

    students["Doniel"]=new score(1907121,80.5);
    students["Nibir"]=new score(1907043,99.5);
    students["Sadia"]=new score(1907027,99.0);

    writeFile(students);
    displayFile();

    return 0;
}
