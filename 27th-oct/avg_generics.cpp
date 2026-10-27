#include <iostream>
using namespace std;

template <typename A>
A average(A a, A b, A c)
{
    A p = (a + b + c) / 3;
     return p;
}

int main()
{
    cout<<average(21, 32, 4);
}
