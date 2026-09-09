#include <iostream>
using namespace std;

int main()
{
    int arr[2][2] = {
        {15, 18},
        {24, 36}};

    int sum = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum += arr[i][j];
        }
    }

    cout << "SUM = " << sum;
}