#include <bits/stdc++.h>

using namespace std;

class Student
{
    int id;
    string name;
public:
    Student(int n,string s)
    {
        id=n;
        name=s;
    }
    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
};

void writeFile(vector<Student*> stud)
{
    ofstream out("list.txt");
    for(auto it:stud)
    {
        out<<it->getId()<<" "<<it->getName()<<endl;
    }
    out.close();
}

void displayFile()
{
    ifstream in("list.txt");
    int id;
    string name;
    while(in>>id>>name)
    {
        cout<<id<<" "<<name<<endl;
    }
    in.close();
}

int main()
{
    vector<Student*> students;

    students.push_back(new Student(27,"Sadia"));
    students.push_back(new Student(43,"Nibir"));

    writeFile(students);
    displayFile();
    return 0;
}
