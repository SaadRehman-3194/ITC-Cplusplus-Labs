/*
   Ask the user for a number and check if it’s positive or not.
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0)
        cout << "The number is positive";
    else 
        cout << "The number is negative";
    return 0;
}