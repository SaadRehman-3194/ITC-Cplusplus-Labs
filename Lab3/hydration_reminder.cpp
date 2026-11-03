/*
   Write a program that reads the amount of water (in liters) a person drinks in a day and provides health reminder.
*/
#include <iostream>
using namespace std;
int main()
{
    float w;
    cout << "Enter how many liters of water you drink in a day: ";
    cin >> w;
    if (w < 1.5)
        cout << "Drink more water for better health!";
    else if (w >= 1.5 && w <= 2.5)
        cout << "You're well hydrated";
    else 
        cout << "Great job staying hydrated!";
    return 0;
}