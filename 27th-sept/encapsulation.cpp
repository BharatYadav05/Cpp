#include <iostream>

using namespace std;

class Student
{

public:
    void display()
    {
        cout << "Student Object";
    }
};

int main()
{
    Student *s = new Student;
    s->display();
    return 0;
}