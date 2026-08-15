// Write a C++ program to create a class Student with data members name, rollNo, and marks. Create an object of the class, accept student details from the user, and display the details.

#include <iostream>
using namespace std;

class Student1
{
public:
    char name[20];
    char roll[10];
    int marks;
};

int main()
{
    Student1 obj;

    cout << "Enter Student Details:" << "\n";
    cout << "Name:";
    cin >> obj.name;
    cout << "Roll no. :";
    cin >> obj.roll;
    cout << "Marks:";
    cin >> obj.marks;

    cout << "\n ---Student Data---" << "\n";
    cout << "Name     :" << obj.name << "\n";
    cout << "Roll no. :" << obj.roll << "\n";
    cout << "Marks    :" << obj.marks << "\n";

    return 0;
}