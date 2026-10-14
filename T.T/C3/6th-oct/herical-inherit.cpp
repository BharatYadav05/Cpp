#include <iostream>
using namespace std;

class a
{
protected:
    void d1()
    {
        cout << "class - A";
    }
};
class b: public a
{
public:
    void d2()
    {
        cout << "class - B";
    }
};
class c: public a
{
public:
    void d3()
    {
        cout << "class - C";
    }
};

int main(){
    a obj2;
    c obj1;
    obj1.d3();
    // obj2.d1();     -- WRONG  (protected)
}