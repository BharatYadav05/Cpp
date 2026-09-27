#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << endl
         << "---CHECK Symmetric MATRIX (n*n) ---" << endl
         << endl;

    cout << " Enter value of 'n' : ";
    cin >> n;
    cout << endl;
    int matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i << "*" << j << "=";
            cin >> matrix[i][j];
        }
    }
    cout << endl
         << " NORMAL matrix " << endl;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cout << matrix[i][j] << "   ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl
         << " TRANSPOSE matrix " << endl;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[j][i] << "   ";
        }
        cout << endl;
    }
    // Check for symmetric matrix
    bool isSymmetric = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                isSymmetric = false;
                break;
            }
        }
    }
    cout << endl;
    cout << endl;
    if (isSymmetric)
    {
        cout << "SYMMETRIC MATRIX" << endl;
    }
    else
    {
        cout << "not SYMMETRIC MATRIX" << endl;
    }

    return 0;
}