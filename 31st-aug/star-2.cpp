#include <iostream>
using namespace std;

int main()

{
    int r;
    cout << "Enter no. of Row :";
    cin >> r;

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= r; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}