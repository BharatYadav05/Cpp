#include <iostream>
#include <string.h>
using namespace std;
class Car
{
public:
    char brand[20], model[20];
    int year;
};
int main()
{
    Car obj1;

    strcpy(obj1.brand, "BMW");
    strcpy(obj1.model, "M5");
    obj1.year = 1999;

    Car obj2;

    strcpy(obj2.brand, "Mercedes");
    strcpy(obj2.model, "Benz");
    obj2.year = 2000;

    cout << obj1.brand << endl;
    cout << obj1.model << endl;
    cout << obj1.year << endl<< endl;

    cout << obj2.brand << endl;
    cout << obj2.model << endl;
    cout << obj2.year << endl;

    return 0;
}