#include<iostream>
#include<string>
using namespace std;
class student{
private:
string name;
int roll;
public:
    student(string n , int m){
      name=n;
      roll=m;
      cout<<name<<endl;
      cout<<roll<<endl;
    }
};
int main (){
student ("ByTek",4);
return 0;
}