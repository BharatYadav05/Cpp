// Write a C++ program to create a class Employee with data members name, id, and salary. Create member functions to accept employee details and display the details. Also calculate and display the annual salary.?

#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string name;
    int id;
    float salary, annual;

    void details()
    {
        cout << "Name:";
        cin >> name;
        cout << "Employe ID:";
        cin >> id;
        cout << "Salary:";
        cin >> salary;
        annual = 12 * salary;
    }

    void display()
    {
        cout << "\n---Employee Details---" << endl;
        cout << "Name :" << name << endl;
        cout << "ID :" << id << endl;
        cout << "Salary :" << salary << endl;
        cout << "Annunal Salary :" << annual << endl;
    }
};

int main()
{
    Employee obj;

    obj.details();
    obj.display();

    return 0;
}