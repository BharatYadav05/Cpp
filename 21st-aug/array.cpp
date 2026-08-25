#include <iostream>
using namespace std;

int main()
{
    int A[20], value, find;
    bool found = false;
    cout << "Enter value of:\n";
    for (int i = 0; i < 10; i++)
    {
        cout << "Index " << i << ": ";
        cin >> A[i];
    }
    cout << "\n\nTraversal :" << endl;
    for (int j = 0; j < 10; j++)
    {
        cout << A[j] << ",";
    }
    cout << "\n\nAddition (at index 4) :" << endl;

    for (int k = 10; k > 4; k--)
    {
        A[k] = A[k - 1];
    }
    cout << "Enter new value for index 4: ";
    cin >> value;
    A[4] = value;

    cout << "\n\nAfter Addition :" << endl;
    for (int l = 0; l < 11; l++)
    {
        cout << A[l] << ",";
    }

    cout << "\n\nDeletion (of index 7) :" << endl;
    for (int m = 7; m < 10; m++)
    {
        A[m] = A[m + 1];
    }
    cout << "\nAfter Deletion :" << endl;
    for (int n = 0; n < 10; n++)
    {
        cout << A[n] << ",";
    }
    cout << "\nSearching :" << endl;

    cout << "Enter a no. to find:";
    cin >> find;
    for (int p = 0; p <= 11; p++)
    {
        
        if (find == A[p])
        {
            cout << "Found at index :"<<p;
            found = true;
            break;
        }
        
    }
    if (!found)
    {
        cout << "Not found.. Try again..";
    }
    return 0;
}