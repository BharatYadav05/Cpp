// Write a C++ program to create a class StudentResult with data members name, rollNo, and marks of three subjects. Create member functions to:

// Accept student details and marks.
// Calculate the total marks.
// Calculate the percentage.
// Display the student's result.

// Tricky part: Don't store total and percentage as input data members; calculate them using member functions.

#include <iostream>
#include <string>
using namespace std;

class StudentResult
{
public:
    string name;
    int rollNo;
    float sub1, sub2, sub3, total, percentage;

    void details()
    {
        cout << "Name : ";
        cin >> name;
        cout << "Roll no. : ";
        cin >> rollNo;
        cout << "Marks in Math : ";
        cin >> sub1;
        cout << "Marks in Science : ";
        cin >> sub2;
        cout << "Marks in Drawing : ";
        cin >> sub3;
    }

    void Total()
    {
        total = (sub1 + sub2) + sub3;
    }

    void Percentage()
    {
        percentage = (total / 300) * 100;
    }

    void Result()
    {
        cout << "\n-----RESULT-----\n";
        cout << "Percentage : " << percentage<<endl ;

        if (percentage >= 35)
        {
            cout << "PASS";
        }
        else
        {
            cout << "FAIL";
        }
    }
};

int main()
{
    StudentResult obj;

    obj.details();
    obj.Total();
    obj.Percentage();
    obj.Result();

    return 0;
}