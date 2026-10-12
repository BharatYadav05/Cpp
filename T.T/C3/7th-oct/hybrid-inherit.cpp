#include <iostream>
using namespace std;
class vehicle
{
public:
    void travel1()
    {
        cout << "VEHICLE";
    }
};

class car : public vehicle
{
public:
    void travel2()
    {
        cout << "VEHICLE";
    }
};
class fare
{
public:
    void travel3()
    {
        cout << "VEHICLE";
    }
};
class bus : public vehicle, public fare
{
public:
    void travel4()
    {
        cout << "VEHICLE";
    }
};

int main()
{
    bus obj1;
    obj1.travel1();
    obj1.travel4();
    obj1.travel3();
}