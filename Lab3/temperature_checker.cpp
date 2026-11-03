/*
   Write a program to check if the temperature input by the user is        below freezing (32°F). If it is, display "It's freezing!"
*/
#include <iostream>
using namespace std;
int main()
{
    float temp;
    cout << "Enter temperature in Farenheit: ";
    cin >> temp;
    if (temp < 32)
        cout << "It's Freezing!";
    else if (temp == 32)
        cout << "Temperature is at freezing point";
    else 
        cout <<"Temperature is above freezing.";
    return 0;
}