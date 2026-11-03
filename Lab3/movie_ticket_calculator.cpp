/*
   Write a program that calculates the ticket price for a movie based on the viewer's age.
*/
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age <= 12)
        cout << "Ticket price: $8.";
    else if (age >= 13 && age <= 59)
        cout << "Ticket price: $12.";
    else 
        cout << "Ticket price: $6.";
    return 0;        
}