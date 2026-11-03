/*
  Write a C++ program that works as a simple calculator.
*/
#include <iostream>
using namespace std;
int main()
{
    float n1,n2;
    char op;
    cout << "Enter First number: ";
    cin >> n1;
    cout << "Select operator (+,-,*,/) ";
    cin >> op;
    cout << "Enter Second number: ";
    cin >> n2;
    switch (op)
        {
            case '+':
                 cout << "Sum = " << n1+n2;
                 break;
            case '-':
                 cout << "Sub = " << n1-n2;
                 break;
            case '*':
                 cout << "Product = " << n1*n2;
                 break;
            case '/':
                {
                    if (n2 == 0)
                        cout << "Not possible";
                    else 
                        cout << "Result = " << n1/n2;
                    break;
                }
            default:
                    cout << "Invalid operator";
        }
    return 0;
}