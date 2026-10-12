#include<iostream>
using namespace std;
class atm{
  private :
  int balance = 5000000;
  public:
  void checkbalance(){
    cout<<"Balance = "<<balance<<endl;
  }  
};
//abstract class ka object create nahi hota hai..
int main(){
    atm obj1;
    obj1.checkbalance();


}