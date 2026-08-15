// Write a C++ program to create a class BankAccount with data members accountNumber, holderName, and balance. Create member functions to deposit money, withdraw money, and display account details. Ensure that money can be withdrawn only when sufficient balance is available.

#include <iostream>
using namespace std;

class BankAccount
{
public:
    int accountNumber;
    float balance, amount;
    string holderName;

    void deposit()
    {
        cout << "Enter amout to deposit:";
        cin >> amount;
        balance += amount;
    }
    void withdraw()
    {
        cout << "Enter amount to withdraw:";
        cin >> amount;
        if (amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Insufficient Balance";
        }
    }

    void details()
    {
        cout << "Holder Name :" << holderName << endl;
        cout << "A/c Number  :" << accountNumber << endl;
        cout << "Balance     :" << balance << endl;
    }

    void setBalance()
    {
        cout << "Enter Initial Balance:";
        cin >> balance;
    }
};

int main()
{
    BankAccount obj;
    cout << "Enter Account details:" << endl;
    cout << "Name:";
    cin >> obj.holderName;
    cout << "Account no. :";
    cin >> obj.accountNumber;

    obj.setBalance();

    int choice;
    cout << "\n1. Deposit\n2. Withdraw\n3. Display Details\nEnter choice:";
    cin >> choice;

    if (choice == 1)
        obj.deposit();
    else if (choice == 2)
        obj.withdraw();
    else if (choice == 3)
        obj.details();

        
    return 0;
}
