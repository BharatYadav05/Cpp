#include <iostream>
using namespace std;
int main()
{
    int arr[2][2] = {
        {15, 18},
        {24, 36}};

    for (int i = 0; i < 2; i++)
    {
        int sumr = 0;
        for (int j = 0; j < 2; j++)
        {
            sumr += arr[i][j];
        }

        cout << "sum of Row " << i + 1 << "is " << sumr << endl<<endl;
        
    }

    return 0;
}