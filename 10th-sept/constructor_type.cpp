#include <iostream>
#include <string>
using namespace std;
// Multiple Constructor with same name but  type different parameter is

class Banking
{
private:
    double deposite;

public:
    Banking()
    {
        Mode_of_Payment = "Cash";
        cout << "This is Constructor called !" << endl;
    }

    Banking(string u, string c, string mop, double AC, double dep)
    {
        username = u;
        city = c;
        Mode_of_Payment = mop;
        AC_Number = AC;
        deposite = dep;
    }

    string username;
    string city;
    string Mode_of_Payment;
    double AC_Number;

    void changeMode(string newMode_of_Payment)
    {
        Mode_of_Payment = newMode_of_Payment;
    }

    void getInfo()
    {
        cout << "Username        : " << username << endl;
        cout << "City            : " << city << endl;
        cout << "Mode of Payment : " << Mode_of_Payment << endl;
        cout << "Account No.     : " << AC_Number << endl;
    }
};
int main()
{
    Banking b1("Bharat", "Nagpur", "Cash", 12345678903456, 300000);
    b1.getInfo();
    return 0;
}
