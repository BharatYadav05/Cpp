#include <iostream>
using namespace std;
class shape
{
public:
    virtual void callculateArea() = 0;
};

class rectange : public shape
{
public:
    void callculateArea() override
    {
        int l = 45, breadth = 34;
        cout << "Area of rectangle = " << l * breadth << endl;
    }
};

int main()
{
    rectange a1;
    a1.callculateArea();
    return 0;
}