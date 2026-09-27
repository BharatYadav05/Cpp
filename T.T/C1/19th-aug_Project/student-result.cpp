#include <iostream>
using namespace std;

int main()
{
    int s1, s2, s3, s4, s5, i, n, t, r;
    float per;
    char name[20];
    bool studentEntered = false;
    do
    {
        cout << "\n==============================================\n";
        cout << "       STDUENT RESULT MANAGEMENT SYSTEM       \n";
        cout << "==============================================\n\n";

        cout << "1. Student Result \n";
        cout << "2. Grade Criteria \n";
        cout << "3. Exit ! \n"
             << endl;
        cout << "Enter option to execute :";
        cin >> i;
        cout << endl;
        switch (i)
        {
        case 1:
            cout << "Enter Student Details :\n \n";
            cout << "Name : ";
            cin >> name;
            cout << "Roll no. (e.g: 77): ";
            cin >> r;
            cout << "\n";
            cout << "Enter marks out of 100 : " << endl;

            cout << "Mathematics :";
            cin >> s1;
            cout << "Science     :";
            cin >> s2;
            cout << "History     :";
            cin >> s3;
            cout << "Geography   :";
            cin >> s4;
            cout << " I.T        :";
            cin >> s5;
            studentEntered = true;
            t = (s1 + s2 + s3 + s4 + s5);
            // per = (t / 500) * 100;
            per = (t / 5);

            cout << "\n\n==============================================\n";
            cout << "               ---STDUENT RESULT---           \n";
            cout << "==============================================\n\n";
            cout << "Name        :" << name << endl;
            cout << "Roll no.    :" << r << endl;
            cout << "Total Marks :" << t << endl;
            cout << "Percentage  :" << per << "%" << endl;
            if (t >= 200)
            {
                cout << "Result      :PASS" << endl
                     << endl;
            }
            else
            {
                cout << "Result      :FAIL" << endl
                     << endl;
            }

            break;
        case 2:
            cout << "\n\n==============================================\n";
            cout << "                 GRADE CRITERIA              \n";
            cout << "==============================================\n\n";
            cout << "90-100  : A+ \n";
            cout << "80-89   : A \n";
            cout << "70-79   : B \n";
            cout << "60-69   : C \n";
            cout << "50-59   : D \n";
            cout << "40-49   : E \n";

            if (studentEntered)
            {
                cout << "\n---Your Subject wise Grade---\n\n";
                if (s1 >= 90 && s1 <= 100)
                {
                    cout << "Mathematics : A+\n";
                }
                else if (s1 >= 80)
                {
                    cout << "Mathematics : A\n";
                }
                else if (s1 >= 70)
                {
                    cout << "Mathematics : B\n";
                }
                else if (s1 >= 60)
                {
                    cout << "Mathematics : C\n";
                }
                else if (s1 >= 50)
                {
                    cout << "Mathematics : D\n";
                }
                else if (s1 <= 49 || s1 >= 1)
                {
                    cout << "Mathematics : F\n";
                }
                if (s1 >= 90 && s1 <= 100)
                {
                    cout << "Science     : A+\n";
                }
                else if (s1 >= 80)
                {
                    cout << "Science     : A\n";
                }
                else if (s1 >= 70)
                {
                    cout << "Science     : B\n";
                }
                else if (s1 >= 60)
                {
                    cout << "Science     : C\n";
                }
                else if (s1 >= 50)
                {
                    cout << "Science     : D\n";
                }
                else if (s1 <= 49 || s1 >= 1)
                {
                    cout << "Science     : F\n";
                }
                if (s1 >= 90 && s1 <= 100)
                {
                    cout << "History     : A+\n";
                }
                else if (s1 >= 80)
                {
                    cout << "History     : A\n";
                }
                else if (s1 >= 70)
                {
                    cout << "History     : B\n";
                }
                else if (s1 >= 60)
                {
                    cout << "History     : C\n";
                }
                else if (s1 >= 50)
                {
                    cout << "History     : D\n";
                }
                else if (s1 <= 49 || s1 >= 1)
                {
                    cout << "History     : F\n";
                }
                if (s1 >= 90 && s1 <= 100)
                {
                    cout << "Geography   : A+\n";
                }
                else if (s1 >= 80)
                {
                    cout << "Geography   : A\n";
                }
                else if (s1 >= 70)
                {
                    cout << "Geography   : B\n";
                }
                else if (s1 >= 60)
                {
                    cout << "Geography   : C\n";
                }
                else if (s1 >= 50)
                {
                    cout << "Geography   : D\n";
                }
                else if (s1 <= 49 || s1 >= 1)
                {
                    cout << "Geography   : F\n";
                }
                if (s1 >= 90 && s1 <= 100)
                {
                    cout << "I.T         : A+\n";
                }
                else if (s1 >= 80)
                {
                    cout << "I.T         : A\n";
                }
                else if (s1 >= 70)
                {
                    cout << "I.T         : B\n";
                }
                else if (s1 >= 60)
                {
                    cout << "I.T         : C\n";
                }
                else if (s1 >= 50)
                {
                    cout << "I.T         : D\n";
                }
                else if (s1 <= 49 || s1 >= 1)
                {
                    cout << "I.T         : F\n";
                }
            }
            break;

            break;
        default:
            break;
        }
    } while (i == 2 || i == 1);
    return 0;
}
