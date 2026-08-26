// *****
// *   *
// *   *
// *   *
// *****

#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    // for (int i = 1; i <= 5; i++)
    // {
    //     cout << "*";
    // }
    // cout << "\n";
    // for (int j = 1; j <= 15; j++)
    // {
    //     if (j == 1 || j == 5 || j == 6 || j == 10 || j == 11 || j == 15)
    //     {
    //         cout << "*";
    //     }
    //     else
    //     {
    //         cout << " ";

    //     }
    //     if(j==5||j==10){
    //         cout << "\n";
    //     }
    // }
    //     cout << "\n";
    //     for (int i = 1; i <= 5; i++)
    // {
    //     cout << "*";
    // }

    return 0;
}