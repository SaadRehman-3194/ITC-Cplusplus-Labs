/*
   Write and run a program that reads two integers and then uses the conditional expression operator to print either “multiple” or “not” according to whether one of the integers is a multiple of the other.
*/
#include <iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout << "Enter two integers: ";
    cin >> n1 >> n2;
    if (n2 != 0 && n1 % n2 == 0)
        cout << n1 << " is multiple of " << n2;
    else if (n1 !=0 && n2 % n1 == 0)
        cout << n2 << " is multiple of " << n1;
    else 
        cout << "Not multiple";
    return 0;
}