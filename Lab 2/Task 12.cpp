/*
  Create a program that calculates the Body Mass Index (BMI) for a      user. The user should input their weight in kilograms and height in   meters. Display the calculated BMI. 
                        Formula: BMI = kg/m2

*/
#include <iostream>
using namespace std;
int main()
{
    int w;
    float h,b;
    cout << "Enter your weight in KGs: ";
    cin >> w;
    cout << "Enter your height in meters: ";
    cin >> h;
    b=w/(h*h);
    cout << "Your Body Mass Index (BMI) is " << b;
    return 0;
}