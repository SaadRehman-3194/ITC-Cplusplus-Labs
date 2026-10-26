/*Write a C++ program that reads a number from user and tell if it’s a positive number or a negative number or its 0. */
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0)
        cout << num <<" is negative";
    else if (num == 0)
        cout << num << " is zero";
    else
        cout << num << " is positive";
    return 0;
}
