#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void getInfo()
    {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

class Student : public Person
{
public:
    string course;
    Student(string name, int age, string course) : Person(name, age)
    {
        this->course = course;
    }
    void getInfo()
    {
        cout << "Name   : " << name << endl;
        cout << "Age    : " << age << endl;
        cout << "Course : " << course << endl;
    };
};

int main()
{
    Student s1("Bharat", 20, "Ai");
    s1.getInfo();
}