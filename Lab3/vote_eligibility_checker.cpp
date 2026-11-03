/*
   Ask the user to enter their age. If they are 18 or older, display "You are eligible to vote." Otherwise, it displays: “You are not eligible to vote yet.”
*/
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18)
        cout << "You are eligible to vote";
    else 
        cout << "You are not eligible to vote";
    return 0;
}