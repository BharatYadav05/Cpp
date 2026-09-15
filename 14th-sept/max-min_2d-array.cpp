#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter Row :";
    cin >> r;
    cout << "Enter Column :";
    cin >> c;

    int arr[r][c];
    cout << endl
         << endl
         << "Enter elements of Array " << r << "*" << c << endl
         << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << i << "*" << j << " = ";
            cin >> arr[i][j];
        }
        // cout << endl;
    }

    int min = arr[0][0], max = arr[0][0];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] < min)
            {
                max = arr[i][j];
            }
        }
    }

    cout << endl
         << "Max = " << max;
    cout << endl
         << "Min = " << min;

    return 0;
}