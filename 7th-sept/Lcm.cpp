#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter 1st Value :";
    cin >> m;

    cout << "Enter 2nd Value :";
    cin >> n;

    for (int i = 1; i <= m * n; i++)
    {
        if (i % m == 0 && i % n == 0)
        {
            cout << "LCM = " << i;
            break;
        }
    }
}