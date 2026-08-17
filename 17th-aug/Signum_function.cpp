#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "\n \n Signum Function" << endl
         << endl;
    cout << "Enter value of 'n' : ";
    cin >> n;

    if (n > 0)
    {
        cout << "Sign : +1";
    }

    else if (n < 0)
    {
        cout << "Sign : -1";
    }

    else
    {
        cout << "Sign : 0";
    }

    return 0;
}