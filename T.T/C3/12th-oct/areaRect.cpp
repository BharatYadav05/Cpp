#include<iostream>
using namespace std;

class shape{
public:
virtual void checkArea()=0;
};

class rectangle : public shape{
    public:
int l=7,b=8;
void checkArea() override{
cout<<"Area = "<<l*b;
}
};

int main(){
    rectangle obj1;
    obj1.checkArea();
}