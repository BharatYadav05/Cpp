#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "---Sum of two Matrix---";
    cout << "Enter Row and Column for both Matrix :" << endl
         << endl;
    cout << "Row :";
    cin >> r;
    cout << "Column :";
    cin >> c;
    cout << endl;
    int arr[r][c], ar[r][c], sum[r][c];

    cout << "Matrix - 1"
         << endl;
    cout
        << "Enter elements of Array " << r << "*" << c << endl
        << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << i << "*" << j << " = ";
            cin >> arr[i][j];
        }
    }
    cout << endl
         << endl;
    cout << "Matrix - 2"
         << endl;
    cout
        << "Enter elements of Array " << r << "*" << c << endl
        << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << i << "*" << j << " = ";
            cin >> ar[i][j];
        }
    }
    cout << endl;
    cout << "Matrix - 1"
         << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Matrix - 2"
         << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            cout << ar[i][j] << "  ";
        }
        cout << endl;
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = arr[i][j] + ar[i][j];
            //  cout << sum[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl
         << "SUM matrix :";

    cout << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            cout << sum[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}