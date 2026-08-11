#include <iostream>
using namespace std;

int main()
{
    int even[10], sum = 0;

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << "Enter " << i + 1 << ":";
    //     cin >> i;
    // }

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter element " << i + 1 << ":";
        cin >> even[i];
    }

    for (int n = 0; n < 10; n++)
    {
        if (even[n] % 2 == 0)
        {
            sum += even[n];
        }
    }

    cout << "Sum of Even no. of an Array :" << sum ;
    return 0;
}
