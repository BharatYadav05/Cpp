// wap c++ program to create student detail and result management system 

// use a - class and object 

// hint, name , roll, age , marks , 

// wap to demonstrate banking management system where main branch act as parent class and other branches will behave like a child class

// var: branchName , city (a city have multiple branch) , headmanager , helpline no. (common), 

// var child: city (inherit), branch - pincode, ifsc code, branch name , 

//var common: amount , transaction;




#include<iostream>
#include<string>
using namespace std;

class Bank{
protected:
double amount, transaction;

public:
double helpLine = 12345678;
string branchName,
};