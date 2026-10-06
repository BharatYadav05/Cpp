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

int main()
{
    car obj1;
    obj1.hunk();
    string m = obj1.model;
    vehicle obj3;
    string a = obj3.brand;
    cout << a << "  " << m;
}