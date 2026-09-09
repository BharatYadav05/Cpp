#include <iostream>
using namespace std;

int main()
{
    int arr[2][2] = {
        {15, 18},
        {24, 36}
    };

    for (int j = 0; j < 2; j++)
    {
        int sumc = 0;
        for (int i = 0; i < 2; i++)
        {
            sumc += arr[i][j];
        }
        cout << "sum of Column " << j + 1 << " is " << sumc << endl
             << endl;
    }

    return 0;
}