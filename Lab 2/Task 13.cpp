/*
  Write a C++ program that calculates the volume and surface area of     a cylinder. The program should prompt the user to input the radius     (r) and height (h) of the cylinder. 
  Use the following formulas: 
                   Volume of Cylinder = π * r² * h
               Surface Area of Cylinder = 2 * π * r * (r + h)
*/
#include <iostream>
using namespace std;
int main()
{
    float v, s, r, h, pi=3.14;
    cout << "Enter radius of cylinder: ";
    cin >> r;
    cout << "Enter height of cylinder: ";
    cin >> h;
    v = pi * (r*r) * h ;
    s = 2 * pi * r * (r+h);
    cout << "Volume of Cylinder = " << v << endl << "Surface area of Cylinder = " << s;
    return 0;
}