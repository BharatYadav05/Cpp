#include <iostream>
using namespace std;

template <typename B>
void display(B paramater)
{
    cout << paramater << endl;
}

int main()
{
    display(10);
    display("B");
    display(5.7);
    display("ByTek");

    return 0;
}