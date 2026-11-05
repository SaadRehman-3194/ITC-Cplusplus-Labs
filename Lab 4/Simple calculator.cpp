/*
  Write a C++ program that works as a simple calculator.
•	Ask the user to enter two numbers and an operator (+, -, *, /).
•	Use a switch statement on the operator to perform the operation and display the result.
•	For any other operator, display "Invalid operator."
*/
#include <iostream>
using namespace std;
int main()
{
    float n1,n2;
    char op;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "select operator from (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> n2;
    switch (op)
        {
            case '+':
            cout << "Result = " << n1+n2;
            break;
            case '-':
            cout << "Result = " << n1-n2;
            break;
            case '*':
            cout << "Result = " << n1*n2;
            break;
            case '/':
            cout << "Result = " << n1/n2;
            break;
            default:
            cout << "Invalid operator";
        }
    return 0;
}