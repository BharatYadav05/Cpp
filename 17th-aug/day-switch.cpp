#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "\n Enter any day no. :";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "Sunday";
         break;
    case 2:
        cout << "Monday";
         break;
    case 3:
        cout << "Tuesday";
         break;
    case 4:
        cout << "Wednesday";
         break;
    case 5:
        cout << "Thursday";
         break;
    case 6:
        cout << "Friday";
         break;
    case 7:
        cout << "Saturday";
         break;

    default:
        cout << "Invaid Day no. ! Try again....";
         break;
    }

    return 0;
}