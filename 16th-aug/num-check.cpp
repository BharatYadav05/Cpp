// Write a C++ program to create a class Number with a data member num. Create member functions to check whether the given number is:
// Even or odd
// Positive, negative, or zero
// Display the appropriate result.

#include<iostream>
using namespace std;

class Number
{
public:
    int num;

    void input()
    {
        cout << "Enter any no. : ";
        cin >> num;
    }
    void Even_odd()
    {
        if (num % 2 == 0)
        {
            cout << num << " is Even no." << endl;
        }
        else
        {
            cout << num << " is Odd no." << endl;
        }
    }

    void type()
    {
        if (num > 0)
        {
            cout << num << " is Positive no." << endl;
        }
        else if (num < 0)
        {
            cout << num << " is Negative no." << endl;
        }

        else
        {
            cout << num << " is Zero !" << endl;
        }
    }
};

int main()
{
    Number obj;

    obj.input();
    obj.Even_odd();
    obj.type();

    return 0;
}