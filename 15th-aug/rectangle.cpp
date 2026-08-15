// Write a C++ program to create a class Rectangle with data members length and breadth. Create member functions to calculate and display the area and perimeter of the rectangle using an object of the class.

#include <iostream>
using namespace std;

class Rectangle
{
public:
    int l, b, a, p;
    
    void area()
    {
        a = l * b;
        cout << "Area: " << a << "\n";
    }
    
    void perimeter()
    {
        p = 2 * (l + b);
        cout << "Perimeter: " << p << "\n";
    }
};
int main()
{
    Rectangle obj;

    cout << "Length of Rectangle:";
    cin >> obj.l;

    cout << "Breadth of Rectangle:";
    cin >> obj.b;

    obj.area();
    obj.perimeter();

    return 0;
}