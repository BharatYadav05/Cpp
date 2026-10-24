#include <iostream>
using namespace std;
template <typename B>
void swapValue(B &a, B &b)
{
    B temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 87;
    cout << "A = " << x << endl;
    cout << "B = " << y << endl
         << endl;
    swapValue(x, y);
    cout << "A = " << x << endl;
    cout << "B = " << y << endl
         << endl;
    float p = 10.44, q = 8.7;
    cout << "A = " << p << endl;
    cout << "B = " << q << endl
         << endl;
    swapValue(p, q);
    cout << "A = " << p << endl;
    cout << "B = " << q << endl;

    return 0;
}