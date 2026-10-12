// Shallow copy: copies all member values from one object to another.
// Deep copy: copies all member values and allocates separate memory for pointer members.

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    double cgpa;

    Student(string name, double cgpa)
    {
        this->name = name;
        this->cgpa = cgpa;
    }
    Student(const Student &obj)
    {
        name = obj.name;
        cgpa = obj.cgpa;
    }

    void getInfo() const
    {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main()
{
    Student s1("ByTek", 9.9);
    Student s2(s1);
    s2.getInfo();

    return 0;
}