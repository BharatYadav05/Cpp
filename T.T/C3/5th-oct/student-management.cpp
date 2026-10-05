#include <iostream>
#include <string>
using namespace std;
class student
{ 
private:
    string name;
    int roll_no, math, science, computer;

public:
    student(string n, int r, int m, int s, int c)
    {
        name = n;
        roll_no = r;
        math = m;
        science = s;
        computer = c;
    }
    int total()
    {

        return math + science + computer;
    }
    float percentage()
    {
        return total() / 3.0;
    }
    void result()
    {
        if (percentage() >= 33)
        {
            cout << "PASS";
        }
        else if (math >= 33 && science >= 33 && computer >= 33)
        {
            cout << "PASS";
        }
        else
        {
            cout << "FAIL";
        }
    }

    void display()
    {
        cout << "----Student Marks Management System----" << endl;
        cout << "Name        :" << name << endl;
        cout << "Roll no.    :" << roll_no << endl;
        cout << "Tolat Marks :" << total() << endl;
        cout << "Percentage  :" << percentage() << endl;
    }
};
int main()
{
    student obj1("Anmol", 01, 95, 80, 90);
    obj1.display();
    obj1.result();
    student obj2("Pragyan", 02, 95, 80, 90);
    obj2.display();
    obj2.result();
    student obj3("Krish", 03, 95, 80, 90);
    obj3.display();
    obj3.result();
    student obj4("Aditya", 04, 95, 80, 95);
    obj4.display();
    obj4.result();

}