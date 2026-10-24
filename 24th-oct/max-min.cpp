#include <iostream>
using namespace std;
template <typename B>
B maximum(B a, B b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    cout << maximum(11, 334) << endl;
    cout << maximum(1, 4) << endl;
    cout << maximum(001, 45) << endl;
}