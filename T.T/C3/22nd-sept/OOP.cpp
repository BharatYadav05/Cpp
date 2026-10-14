#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    int n;
    string name;

    void display()
    {
        cout << "Bharat - ByTek";
    }
};

int main()
{

    cout << "ByTek" << endl;
    student obj;
    obj.n = 54;
    obj.name = "Bharat";
    cout << obj.n << endl;
    cout << obj.name << endl;

    obj.display();
    return 0;
}