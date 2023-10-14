//Static Variable
#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    static int n;
};
int Student::n;
int main()
{
    Student s1,s2;
    s1.n=5;
    s2.n=10;
    cout<<s1.n<<endl;
    return 0;
}
