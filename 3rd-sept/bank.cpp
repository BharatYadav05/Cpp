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
		Mode_of_Payment="Cash";
	}
	string name;
	string Mode_of_Payment;

	void changeMode(string newTran)
	{
		Mode_of_Payment = "newMode_of_Payment";
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

int main() {
	Bank e1;
	e1.name ="Bharat";
	e1.setdeposite(500000);

	cout<<e1.name<<endl;
	cout<<e1.getdeposite()<<endl;
	cout<<e1.Mode_of_Payment<<endl;

	return 0;
}
