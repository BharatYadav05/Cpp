#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream file(R"(D:\1BCA_ALL_NOTES\C++\Cpp_practice\29th-oct\file-handling\\file1.txt)");

    file << "How are you ?";
    file.close();

    cout << "File created successfully!";
}