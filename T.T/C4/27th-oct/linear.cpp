#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int key;
    int found = -1;
    cout << "Search number : ";
    cin >> key;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            found = i;
            break;
        }
    }

    if (found != -1)
    {
        cout << "Found at index : " << found;
    }
    else
    {
        cout << "Enter number is not in array ";
    }
}