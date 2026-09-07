#include <iostream>
using namespace std;

int LCM(int m, int n)
{
    int LCM;
    for (int i = 1; i <= m * n; i++)
    {
        if (i % m == 0 && i % n == 0)
        {
            LCM = i;
            break;
        }
    }
}
int main()
{
    int lcm1 = LCM(8, 20);
    cout << "LCM of 8 and 20 is " << lcm1<<endl;
    int lcm2 = LCM(23, 45);
    cout << "LCM of 23 and 45 is " << lcm2<<endl;
    int lcm3 = LCM(93, 44);
    cout << "LCM of 93 and 44 is " << lcm3<<endl;
}