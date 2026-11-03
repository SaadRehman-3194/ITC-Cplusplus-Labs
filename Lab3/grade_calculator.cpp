/*
   Write a program that takes a student's marks (out of 100) and outputs their grade.
*/
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks >= 90 && marks <= 100)
        cout <<"Grade A";
    else if (marks >= 80 && marks <= 89)
        cout << "Grade B";
    else if (marks >=70 && marks <= 79)
        cout << "Grade C";
    else if (marks >= 60 && marks <= 69)
        cout << "Grade D";
    else if (marks < 60)
        cout << "Grade F";
    return 0;
}