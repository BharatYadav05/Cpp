#include <iostream>
using namespace std;

int main()

{
    int r,c;
    
    cout << "Enter no. of Row :";
    cin >> r;
    // cout << "Enter Column :";
    // cin >> c;

    for (int i = 1; i <= r; i++)
    {
        for (int j = r; j >= i; j--)
        {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}