#include <iostream>
using namespace std;

class Student
{
public:
    Student()
    {
        cout << "Constructor" << endl; // ---2
    }

    ~Student() // distructor has no parameter
    {
        cout << "Object Distructor" << endl; // --- 4
    }
};

int main()
{
    cout << "Main function Start" << endl; // --- 1
    Student s1;

    cout << "Working with Object" << endl; // --- 3
}