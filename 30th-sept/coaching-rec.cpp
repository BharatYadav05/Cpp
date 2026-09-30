// a coaching teacher store the marks of student A in 5 subject using a 1d array WAP

// 1) store the marks of 5 subjects in an array
// 2) usage a function to check  weather a Student is passed or not
// 3) store the result pass or not pass in another array
// 4) display the final result in following formate
// 94 : pass
#include <iostream>
using namespace std;
string checkResult(int m)
{
if (m >= 45)
    {
        return "Pass";
    }
    else
    {
        return "Not Pass";
    }
}
int main()
{
    int arr[] = {46, 40, 76, 35, 90};
    string res[5];
    for (int i = 0; i < 5; i++)
    {
        res[i] = checkResult(arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " : " << res[i] << endl;
    }
    return 0;
}