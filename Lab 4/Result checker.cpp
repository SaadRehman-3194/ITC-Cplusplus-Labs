/*
  Write a C++ program that asks the user to enter a grade letter (A, B, C, D or F) and displays a remark using a switch statement.
*/
#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter your grades: ";
    cin >> c;
    switch (c)
        {
            case 'a': case 'A':
            cout << "Excellent";
            break;
            case 'b': case 'B':
            cout << "Very Good";
            break;
            case 'c': case 'C':
            cout << "Good";
            break;
            case 'd': case 'D':
            cout << "Needs Improvement";
            break;
            case 'f': case 'F':
            cout << "Fail";
            break;
            default:
            cout << "Invalid Grades";
        }
    return 0;
}