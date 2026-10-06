#include <iostream>
#include <string>
using namespace std;

class vehicle
{
public:
    string brand = "BMW";
    void hunk()
    {
        cout << "hello BMW !";
    }
};
class car : public vehicle // inherit class
{
public:
    string model = "M5";
};

class cycle : public car
{
public:
    void display()
    {
        cout << "This is cycle !";
    }
};

class privatejet : public cycle
{
    void p()
    {
        cout << "My Jet !";
    }
};

int main()
{
    cycle obj1;
    string m = obj1.model;
    cout << m;
    obj1.display();
}
