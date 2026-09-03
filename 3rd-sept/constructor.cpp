#include<iostream>
#include<string>
using namespace std;

class Teacher {
    private :
    double salary;

    public :
    Teacher (){
        dept="computer science";

    }
    string name;
    string subject; 
    string dept;
void changeDept(string newDept){
    dept=newDept;
}
void setSalary(double S){
    salary= S;
}

double getSalary(){
    return salary;
}

};

int main (){
    Teacher t1 ;
    t1.name ="Bharat";
    t1.subject = "C.S";
    t1.setSalary(500000);

    cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;
    cout<<t1.dept<<endl;

return 0;
}

