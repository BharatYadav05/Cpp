// W.A.P to do following:

// 1) Create a function which will accept a no. and returns true if it is prime else return false.

// 2) Create an array named numbers and store random 8 values.

// 3)Create another array which will store true & false according to numbers in the numbers array.

// 4) Display the boolean array.

#include <iostream>
using namespace std;

bool checkPrime(int n)
{
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    return count == 2 ? true : false;
}

int main()
{
    int arr[8];
    for (int i = 0; i < 8; i++)
    {
        cout << "Num " << i << " = ";
        cin >> arr[i];
        cout << endl;
    }

    // int numbers[8]={12,323,22,32,5,66,23,44};
    bool values[8];

    for (int i = 0; i < 8; i++)
    {
        values[i] = checkPrime(arr[i]);
    }

    for (int i = 0; i < 8; i++)
    {
        cout << values[i] << endl;
    }
    return 0;
}