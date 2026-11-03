/*
   Ask the user to enter their age. If they are 18 or older, display "You are eligible to vote." If the age is less than 18, nothing displays.
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
    return 0;
}