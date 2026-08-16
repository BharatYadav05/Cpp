// Write a C++ program to create a class Temperature with a data member celsius. Create a member function to convert Celsius into Fahrenheit and display the result.

#include <iostream>
using namespace std;

class Temperature
{
public:
    float celsius, fahrenheit;

    void convert()
    {
        cout << "Temperature in Celcius:";
        cin >> celsius;

        fahrenheit = (celsius * 9 / 5) + 32;

        cout << "\nin Fahrenheit = " << fahrenheit;
    }
};

int main()
{
    Temperature obj;

    obj.convert();

    return 0;
}