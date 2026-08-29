#include <iostream>
#include <string>
using namespace std;
class students
{
    // Properties / Atributes
public:
    string name;
    string address;
    int marks;
    int age;
    int rollno;

    // methods of the class/member functions
    void changeName(string FullName)
    {
        name = FullName;
    }
};

int main()
{
    students a1;
    a1.name = "Bharat";
    cout << a1.name << endl;
    return 0;
}