#include<iostream>
using namespace std;
class A{ //overloading
public:
void add(int a){
    cout<<a<<endl;
}
void add(int a,int b){
    cout<<a+b<<endl;
}
void add(int a,int b , int c){
    cout<<a+b+c<<endl;
}
};

int main(){
    A obj1;
    obj1.add(10);
    obj1.add(17,7);
    obj1.add(10,30,50);
}
