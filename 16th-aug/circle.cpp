// Write a C++ program to create a class Circle with data member radius. Create member functions to calculate and display the area and circumference of the circle.

#include <iostream>
using namespace std;

class Circle
{
public:
    float radius, area, circumference;
     const float PI = 3.14159;

    void calculate()
    {
        cout << "Radius of circle :";
        cin >> radius;

        area = (radius * radius) * PI;
        circumference = (2 * PI) * radius;
    }

    void display()
    {
        cout << "\n";
        cout << "Area = " << area << endl;
        cout << "Circumference = " << circumference << endl;
    }
};

int main()
{
    Circle obj;

    obj.calculate();
    obj.display();

    return 0;
}