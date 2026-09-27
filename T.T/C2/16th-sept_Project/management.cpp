#include <iostream>
#include <string>
using namespace std;

int total(int a, int b, int c)
{
    int sum = (a + b + c);
    return sum;
}

int per(int a, int b, int c)
{
    int p = ((a + b + c) / 300) * 100;
    return p;
}

int main()
{
    int r, m, n;
    int arr1[3], arr2[3], arr3[3], arr4[3], arr5[3];
    char name[20];

    cout << "---STUDENT MANAGEMENT SYSTEM---" << endl;
    cout << "choose :";

    // switch (n)
    // {
    // case constant expression:
    //     /* code */
    //     break;

    // default:
    //     break;
    // }
    for (int i = 1; i < 6; i++)
    {
        cout << endl
             << "Enter Students-" << i << "Details : " << endl
             << endl;
        cout << "Name : ";
        cin >> name;
        cout << "Roll no. : ";
        cin >> name;

        for (int j = 1; j < 4; j++)
        {
            cout << "marks in Subject - " << j;
            cin >> arr1[j];
        }
    }
    int s1 = total(arr1[0], arr1[1], arr1[2]);
    int s2 = total(arr2[0], arr2[1], arr2[2]);
    int s3 = total(arr3[0], arr3[1], arr3[2]);
    int s4 = total(arr4[0], arr4[1], arr4[2]);
    int s5 = total(arr5[0], arr5[1], arr5[2]);

    int sums[5] = {s1, s2, s3, s4, s5};
    cout << s1;
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Student - : " << i << sums[i] << endl;
    }

    if (s1 >= 150)
    {
        cout << "PASS";
    }

    else
    {
        cout << "Fail";
    }
    if (s2 >= 150)
    {
        cout << "PASS";
    }

    else
    {
        cout << "Fail";
    }
    if (s3 >= 150)
    {
        cout << "PASS";
    }

    else
    {
        cout << "Fail";
    }
    if (s4 >= 150)
    {
        cout << "PASS";
    }

    else
    {
        cout << "Fail";
    }
    if (s5 >= 150)
    {
        cout << "PASS";
    }

    else
    {
        cout << "Fail";
    }

    int s6 = per(arr1[0], arr1[1], arr1[2]);
    int s7 = per(arr2[0], arr2[1], arr2[2]);
    int s8 = per(arr3[0], arr3[1], arr3[2]);
    int s9 = per(arr4[0], arr4[1], arr4[2]);
    int s10 = per(arr5[0], arr5[1], arr5[2]);

    cout << endl
         << "PERCENTAGE :" << endl;
    cout << "Student -1 " << s6 << endl;
    cout << "Student -2 " << s7 << endl;
    cout << "Student -3 " << s8 << endl;
    cout << "Student -4 " << s9 << endl;
    cout << "Student -5 " << s10 << endl
         << endl;
    ;

    return 0;
}