#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file2(R"(D:\1BCA_ALL_NOTES\C++\Cpp_practice\29th-oct\file-handling\\file-2.txt)");

    ofstream file3(R"(D:\1BCA_ALL_NOTES\C++\Cpp_practice\29th-oct\file-handling\\file-3.txt)");

    file2 << "Why are you here ?";
    file3 << "You are again here ?";

    file2.close();
    file3.close();

    cout << "All files created :) ";
}