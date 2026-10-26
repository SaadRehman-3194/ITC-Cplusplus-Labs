//Write a C++ program that reads a character from user and tell whether character is an alphabet or not using selection statement.
#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter a character: ";
    cin >> c;
    if (c>='a' && c<='z')
        cout << c <<" is an alphabet";
    else if(c>='A' && c<='Z')
        cout << c << " is an alphabet";
    else
    cout << c << " is not an alphabet";
    return 0;
}
