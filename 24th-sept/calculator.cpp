#include <iostream>
#include <iomanip>
using namespace std;

class calculator
{
public:
    float add(float a, float b)
    {
        cout << a << "+" << b << " = " << fixed << setprecision(2) << a + b;
    }
    float sub(float a, float b)
    {
        cout << a << "-" << b << " = " << fixed << setprecision(2) << a - b;
    }
    float mul(float a, float b)
    {
        cout << a << "*" << b << " = " << fixed << setprecision(2) << a * b;
    }
    float div(float a, float b)
    {
        cout << a << "/" << b << " = " << fixed << setprecision(2) << a / b;
    }
};

int main()
{
    float a, b;
    int choice;
    calculator obj;
    cout << endl
         << "What you want to do ?" << endl;
    cout << "1) Addition " << endl;
    cout << "2) Subtraction " << endl;
    cout << "3) Multiplication " << endl;
    cout << "4) Division " << endl
         << endl;
    cout << "Choose only from 1 - 4" << endl;
    cin >> choice;

    if (choice < 1 || choice > 4)
    {
        cout << "Run the program again !";
    }
    cout << "First no.  : ";
    cin >> a;
    cout << "Second no. : ";
    cin >> b;
    cout << endl;
    switch (choice)
    {
    case 1:
        obj.add(a, b);
        break;
    case 2:
        obj.sub(a, b);
        break;
    case 3:
        obj.mul(a, b);
        break;
    case 4:
        obj.div(a, b);
        break;
    }

    return 0;
}
