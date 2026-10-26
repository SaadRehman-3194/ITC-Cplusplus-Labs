/* Write a C++ program that reads a number from user and tell whether a number is even or odd using selection statement.*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(num%2 == 0)
        cout << num << " is even number";
    else 
        cout << num << " is odd number";
    return 0;
}
