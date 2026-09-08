#include <iostream>
using namespace std;

int main()
{
    int arr[5][3] = {
        {22, 33, 44},
        {13, 44, 56},
        {54, 64, 65},
        {43, 64, 66},
        {12, 42, 55}};
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
}