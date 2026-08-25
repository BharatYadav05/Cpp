#include <iostream>
using namespace std;

int main()
{
    int n, a, sum = 0;

    cout << "Enter any value : ";
    cin >> a;
    n = a;
    while (a > 0)
    {
        sum = sum + (a % 10);
        a = a / 10;
    }
    cout << "Sum of Digits of "<<n<< " is " <<sum;

    return 0;
}