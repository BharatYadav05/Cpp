#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    int number;

public:
    // constructor
    student(int a)
    {
        number = a;
        cout << number << endl;
    }
    // copy constructor
    student(const student &ref)
    {
        number = ref.number;
    }
};

int main()
{
    student s1(20);

    student s = s1;
}