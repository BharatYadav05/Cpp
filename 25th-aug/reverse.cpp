#include <iostream>
using namespace std;
int main()
{
    int rev = 0, n ;
    cout << "Enter any value : ";
    cin >> n;
    while (n != 0)
    {
        rev = (rev * 10) + (n % 10);
        n = n / 10;
    }
    cout << "Reverse = " << rev;

    return 0;
}