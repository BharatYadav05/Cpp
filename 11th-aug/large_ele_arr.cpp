#include <iostream>
using namespace std;

int main()
{
    int arry[5], large;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter index " << i + 1 << ":";
        cin >> arry[i];
    }
    large = arry[0];

    for (int j = 0; j < 5; j++)
    {
        // if (arry[j] > arry[j + 1])
        if (arry[j] > large)
        {
            large = arry[j];
        }
    }
    cout << "Largest element :" << large;
    return 0;
}