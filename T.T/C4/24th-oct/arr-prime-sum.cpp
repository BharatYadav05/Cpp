// wap to create an array with random 10 numbers and find the sum of all the numbers of the array which are prime

#include <iostream>
using namespace std;
int checkPrime(int a)
{
    if (a < 1)
    {
        return 0;
    }
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return a;
}
              
int main()
{
    int sum = 0;
    int arr[10] = {12, 22, 33, -3, 55, 6, 7, 9, 11, 41};

    for (int i = 0; i < 10; i++)
    {
        sum = sum + checkPrime(arr[i]);
    }

    cout << "Sum = " << sum;
}