#include <iostream>
// #include<string>
using namespace std;
class Student
{
public:
    int marks;
    string name;
};
int main()
{
    Student s2, s1;
    // Student s1;
    s1.marks = 76;
    s2.name = "ByTek";
    cout << s1.marks << endl
         << s2.name << endl;
    // cout<<s2.name<<endl;
    return 0;
}