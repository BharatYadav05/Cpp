#include<iostream>
using namespace std ;
class Animal{
    public:
    virtual void sound(){
        cout<<"Animal Makes Sound"<<endl;
    }
};

class Dog : public Animal{
    public:
    void sound() override{
        cout<<"Dog - Barks"<<endl;
    }
};
class Cat : public Animal{
    public:
    void sound() override{
        cout<<"Cat - Meow"<<endl;
    }
};

int main(){
    Animal *ace;
    Animal a;
    Dog d;
    Cat c;
    d.sound();
    c.sound();
    ace = &d;
    ace->sound();
    ace = &c;
    ace->sound();


}