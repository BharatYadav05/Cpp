#include <iostream>
using namespace std;

class MyClass
{
public:
    int MyNum;
    char MyString[5];
};

int main()
{
    MyClass MyObj;

    MyObj.MyNum = 15;
    MyObj.MyString[0] = 'B';
    MyObj.MyString[1] = 'Y';
    MyObj.MyString[2] = 'T';
    MyObj.MyString[3] = 'E';
    MyObj.MyString[4] = 'K';
    MyObj.MyString[5] = '\0';

    cout << MyObj.MyNum << "\n";

    cout << MyObj.MyString;

    return 0;
}
