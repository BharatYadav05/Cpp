#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter value of :" << endl;
    cout << "a : ";
    cin >> a;
    cout << "b : ";
    cin >> b;
    cout << "Before swap:" << endl;
    cout << "a : " << a<<endl;
    cout << "b : " << b<<endl;
    c = a;
    a = b;
    b = c;

    cout << "After swap value of :" << endl;
    cout << "a : " << a<<endl;
    cout << "b : " << b;
}