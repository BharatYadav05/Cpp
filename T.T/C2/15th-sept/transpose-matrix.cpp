#include <iostream>
using namespace std;
int main()
{
    // cout << endl
    //      << "---CHECK TRANSPOSE MATRIX---" << endl
    //      << endl;
    // cout << "Enter no. of Row    : ";
    // cin >> r;
    // cout << "Enter no. of Column : ";
    // cin >> c;
    int arr[3][3] = {
        {2, 6, 1},
        {6, 2, 9},
        {9, 1, 1}};

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << i << "*" << j << "=";
    //         cin >> arr[i][j];
    //     }
    // }

    int transpose_Matrix[3][3];

    cout << " normal matrix";
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    // check transpose
    cout << " TRANSPOSE matrix";
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    // cout << endl
    //      << "Check Symmetric Matrix" << endl;

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         transpose_Matrix[i][j] = arr[i][j];
    //     }
    //     cout << endl;
    // }
    bool symmetric = true;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpose_Matrix[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (transpose_Matrix[i][j] != arr[i][j])
            {
                symmetric = false;
                break;
            }
        }
        if (!symmetric)
        {
            break;
        }
    }
    if (symmetric)
    {
        cout << endl<<"SYMMETRIC MATRIX" << endl;
    }
    else
    {
        cout << endl<<"not SYMMETRIC MATRIX";
    }

    return 0;
}