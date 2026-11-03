// The time complexity of search function is o(1).
//  The search time will increase.

#include <iostream>
using namespace std;

class Vehicle
{
public:
    int Vehicle_no;
    int type, inhour, exhour, hour;

    Vehicle()
    {
    }
};

class ParkingLot : public Vehicle
{
public:
    int slots[10], totalEarn;
    int bike = hour * 10, car = hour * 30;

    int park()
    {
        cout << "Vehicle Number :";
        cin >> Vehicle_no;
        cout << "Type (1-Bike, 2-Car): ";
        cin >> type;
        cout << "Enter Hour :";
        cin >> inhour;
        return 0;
    }
    void removeVehicle()
    {
        cout << "Vehicle Number :";
        cin >> Vehicle_no;
        cout << "Exit hour :";
        cin >> exhour;
    }

    void allParked()
    {
    }
};

int main()
{
    cout << "\n===== GODOWLIA SMART PARKING =====\n\n";
    ParkingLot p1;
    int choice;
    cout << " 1. Park a vehicle \n 2. Remove a vehicle (generate bill)\n 3. Show all parked vehicles\n 4. Show free slots\n 5. Search a vehicle by number\n 6. Close for the day (summary)\n\n";
    cout << "Enter option :";
    cin >> choice;
    do
    {
        switch (choice)
        {
        case 1:
            p1.park();
            break;

        default:
            break;
        }
    } while (choice < 6 && choice > 0);
}