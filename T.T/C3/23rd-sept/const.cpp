#include <iostream>
using namespace std;

class student
{

public:
    student()
    {
        cout << "This is constructor" << endl;
    }
};
int main()
{

    student obj1;

    return 0;
}