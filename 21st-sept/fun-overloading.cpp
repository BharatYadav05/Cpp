#include <iostream>
using namespace std;

class Calculate
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main()
{
    cout << endl;
    Calculate caseA;

    cout << "Sum of two no. is =" << caseA.add(2, 7);
    cout << endl
         << endl;
    cout << "Sum of three no. is =" << caseA.add(2, 7, 8);
}