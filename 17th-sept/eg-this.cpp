#include <iostream>
#include <string>
using namespace std;

class student
{
    string name;
    int rollNo;

public:
    student(string name, int rollNo)
    {
        this->name = name;
        this->rollNo = rollNo;
    }

    void show()
    {
        cout << "Name     : " << name << endl;
        cout << "Roll no. : " << rollNo;
    }
};

int main()
{
    student s1("Bharat", 77);
    s1.show();
    cout << endl
         << endl;
    student s2(" Anmol", 78);
    s2.show();
    cout << endl
         << endl;
    student s3("Aditya ", 108);
    s3.show();
    cout << endl
         << endl;
    student s4("Adarsh ", 123);
    s4.show();
    cout << endl
         << endl;
}