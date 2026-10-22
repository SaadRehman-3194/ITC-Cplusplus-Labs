/*
  Ask the user for their birth year and calculate their age (assuming the current year is 2024).
*/
#include <iostream>
using namespace std;
int main()
{
    int n, age;
    cout << "Enter your Birth year: ";
    cin >> n;
    age = 2024 - n;
    cout << "Your age is " << age;
    return 0;
}