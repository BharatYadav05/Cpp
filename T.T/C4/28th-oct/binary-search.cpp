#include <iostream>
using namespace std;

int main()
{
    int n = 7, key = 0;
    int arr[7] = {12, 34, 54, 56, 76, 87, 45};

    cout << "Enter element to find : ";
    cin >> key;

    int low = 0, high = n - 1, mid;

    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] == key)
        {
            cout << "Element found at index : " << mid;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid = 1;
        }
        else
        {
            low = mid - 1;
        }
    }
}