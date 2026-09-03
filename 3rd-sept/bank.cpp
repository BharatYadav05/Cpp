#include <iostream>
#include <string>
using namespace std;
class Bank
{
private:
    double deposite;

public:
    Bank()
    {
        dept = "Mode_of_Payment";
    }
    string name;
    string dept;

    void changeDept(string newDept)
    {
        dept = "newDept";
    }
    void setdeposite(double S)
    {
        deposite = S;
    }

    double getdeposite()
    {
        return deposite;
    }
};

int main(){
    Bank e1;
    e1.name ="Bharat";
    e1.setdeposite(500000);

    cout<<e1.name<<endl;
    cout<<e1.getdeposite()<<endl;

    return 0;
}
