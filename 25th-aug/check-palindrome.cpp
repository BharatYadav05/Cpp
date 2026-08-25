#include <iostream>
using namespace std;
int main()
{
    int rev = 0, n, a;
    cout << "Enter any value : ";
    cin >> n;
    a = n;
    while (n != 0)
    {
        rev = (rev * 10) + (n % 10);
        n = n / 10;
    }

    if (rev == a)
    {
        cout << "given no. is Palindrome";
    }
    else
    {
        cout << "given no. is NOT Palindrome";
    }

    return 0;
}
