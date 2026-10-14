#include <iostream>
using namespace std;
class Student
{
private:
    int marks;

public:
    void display(int n)
    {
        marks = n;
        cout << marks;
    }
};

int main()
{

    Student obj;

    obj.display(9);
}