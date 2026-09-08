#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int m, n;

    cout << "Enter 1st Value :";
    cin >> m;

    cout << "Enter 2nd Value :";
    cin >> n;

    int M = max(m, n);

    cout << "Max = " << M;
}