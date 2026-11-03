/*
   Accept a number from the user and check if it's even. If it is, display "The number is even.", or, “The number is odd.”
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0)
        cout << "The number is even";
    else 
        cout << "The number is odd";
    return 0;
}