/* int arr[]={23,12,33,65,5};
(i)= reverse
(ii)= find the largest element of given array */

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {23, 12, 33, 65, 5}, large = 0;
    // Reverse
    cout << endl<<"Reverse of given array : " ;
    for (int i = 4; i <= 4 && i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    
    cout << endl<<endl
         << "Largest element : ";
    for (int i = 0; i < 5; i++)
    {
        if (large < arr[i])
        {
            large = arr[i];
        }
    }

    cout << large << endl<<endl;
}