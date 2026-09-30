// A shopkeeper records the price of 6 products in one 1d array.

// Write A C++ PROGRAM THAT :

// 1) STORE THE PRICES OF 6 PRODUCTS IN AN ARRAY
// 2) CREATE THE FUNCTION findHighest() that returs the highst price
// 3) create another function countExpensive() that returs how many producst cost more than 500
// 4) display all product prices, highst price , no. of expensive products

#include <iostream>
using namespace std;

int findHighest(int m[])
{
    int high = m[0];
    for (int i = 0; i < 6; i++)
    {
        if (m[i] > high)
        {
            high = m[i];
        }
    }
    return high;
}

int countExpensive(int m[])
{
    int count = 0;
    for (int i = 0; i < 6; i++)
    {
        if (m[i] > 500)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[6] = {2314, 3423, 434, 566, 212, 905};
    cout << "All product price ";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    cout << "Highest Price : ";
    int high = findHighest(arr);
    cout << high << endl
         << endl;

    cout << "No. of expensive products :";
    int exp = countExpensive(arr);
    cout << exp << endl
         << endl;

    return 0;
}