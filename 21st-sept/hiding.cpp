#include <iostream>
#include <string>
using namespace std;

class program
{
private:
    string name;

public:
    // getter
    string getname()
    {
        return name;
    }
    // setter
    void setname(string newname)
    {
        name = newname;
    }
};

int main()
{
    program P;
    P.setname("ByTek");

    cout << "Name = " << P.getname();

    return 0;
}