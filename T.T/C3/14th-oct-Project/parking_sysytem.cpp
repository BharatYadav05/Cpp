#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    string vehicleNumber, ownerName;
    int hours;

public:
    Vehicle(std::string m, string n, int a)
    {
        cout << "Vehicle Number  : " << n;
        cout << "Owner Name      :" << m;
        cout << "Parking Hour(s) :" << a;
    }
    void showDetails()
    {
        cout << "Vehicle Number  : " << vehicleNumber;
        cout << "Owner Name      : " << ownerName;
        cout << "Hours           : " << hours;
    };

    virtual int claculateFee()
    {
        return 0;
    }
};

class Bike : public Vehicle
{
public:
    Bike() {
        // string m = "UP65AB1234", n = "Ramesh ";
        // int a = 3;
        // Vehicle("UP65AB1234", "Ramesh", 3);

        // cout << "Vehicle Number : UP65AB1234 " << endl;

        // cout << "Owner Name : Ramesh " << endl;

        // cout << "Hours Parked : 3" << endl;
    };

    void bike(string m, string n, int a);
    // void bike(string m, string n, int a): Vehicle( m,  n,  a);

    // void Vehicle()=bike();

    // void vehicle() override bike();

    int claculateFee() override
    {
        int fee = hours * 10;
        cout << "Parking fee : 10/-" << endl;
        cout << "Fee : " << fee;
    }
};
class Car : public Vehicle
{

public:
    Car() {
        // Vehicle("UP65AB1234", "Suresh", 4);
    };
    void car(std::string m, string n, int a);
    int claculateFee() override
    {
        int fee = hours * 20;
        cout << "Parking fee : 20/-" << endl;
        cout << "Fee : " << fee;
    };
};
class Truck : public Vehicle
{
public:
    Truck() {
        // Vehicle("UP65AB1904", "Mahesh", 2);
    };
    void truck(std::string m, string n, int a);
    int claculateFee() override
    {
        int fee = hours * 50;
        cout << "Parking fee : 50/-" << endl;
        cout << "Fee : " << fee;
    }
};

int main()
{
    int totalCollection;
    cout << "===== MALL PARKING BILL =====" << endl
         << endl;
    Bike b1, b2;
    Car c1, c2;
    Truck t1, t2;

    b2.bike("UP65AB1234", "Ramesh", 3);
    c2.car("UP65AB1234", "Suresh", 4);
    t2.truck("UP65AB1904", "Mahesh", 2);

    b1.showDetails();
    cout << endl
         << "-----------------------------" << endl;
    c1.showDetails();
    cout << endl
         << "-----------------------------" << endl;
    t1.showDetails();
    cout << endl
         << "-----------------------------" << endl;

    totalCollection = b1.claculateFee() + c1.claculateFee() + t1.claculateFee();
    cout << endl
         << "-----------------------------" << endl;
    cout << "Total Collection Today Rs. " << totalCollection;

    return 0;
}