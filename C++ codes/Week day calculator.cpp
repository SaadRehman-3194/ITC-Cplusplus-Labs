/*Write a C++ Program that input a number 1 to 7 (inclusive) representing days of week and print the week day.*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number between 1 and 7: ";
    cin >> num;
    if (num == 1)
        cout << "It is Monday";
    else if (num == 2)
        cout << "It is Tuesday";
    else if (num == 3)
        cout << "It is Wednesday";
    else if (num == 4)
        cout << "It is Thursday";
    else if (num == 5)
        cout << "It is Friday";
    else if (num == 6)
        cout << "It is Saturday";
    else if (num == 7)
        cout << "It is Sunday";
    else 
        cout << "Enter valid number from 1 to 7";
    return 0;
}
