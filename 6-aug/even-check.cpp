#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter any no. :";
    cin >> a;

    if (a % 2 == 0)
    {
        cout << a << " is Even no.";
    }
    else
    {
        cout << a << " is Odd no.";
    }
    return 0;
}