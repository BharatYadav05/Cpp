#include <iostream>
using namespace std;

template <typename P>
void checkPrime(P n)
{
    if (n <= 1)
    {
        cout << n << "is Not Prime !";
    }
    else
    {
        P t=0;
        // bool foundFactor = false;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                // foundFactor = true;
                t++;
                break;
                // cout << n << "is Not Prime !";
            }
        }

        // if (foundFactor)
        if (t==1)
        {
            cout << n << " is Not Prime !" << endl;
        }
        else
        {
            cout << n << " is Prime !" << endl;
        }
    }
}

int main()
{
    checkPrime(11);
}