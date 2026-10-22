/*
Write a Program that will print a table of a given number. Create an integer variable and inputs its value using cin statement and prints the entered number’s table.
*/
#include <iostream>
using namespace std;
int main()
{
    int n,c=1;
    cout << "Enter a number to calculate table: ";
    cin >> n;
    cout << n << " x " << c << " = " << n*c << endl;
    c=c+1;
    cout << n << " x " << c << " = " << n*c << endl;
    c=c+1;
    cout << n << " x " << c << " = " << n*c << endl;
    c=c+1;
    cout << n << " x " << c << " = " << n*c << endl;
    c=c+1;
    cout << n << " x " << c << " = " << n*c << endl;
    c=c+1;
    cout << n << " x " << c << " = " << n*c << endl;
    c=c+1;
    cout << n << " x " << c << " = " << n*c << endl;
    c=c+1;
    cout << n << " x " << c << " = " << n*c << endl;
    c=c+1;
    cout << n << " x " << c << " = " << n*c << endl;
    c=c+1;
    cout << n << " x " << c << " = " << n*c << endl;
    return 0;
}