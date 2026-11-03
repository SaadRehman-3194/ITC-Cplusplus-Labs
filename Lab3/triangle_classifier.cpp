/*
   Write a program which takes as input 3 points and tells whether these points
   are the coordinates of an isosceles, equilateral, right angled or scalene triangle.
*/
#include <iostream>
using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3;
    cout << "Enter X and Y co-ordinates of 3 sides of the triangle x y for each:";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    // lengths of the three sides
    int a = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    int b = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2);
    int c = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);
    // Area of a triangle
    int area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
    if (area == 0)
        cout << "These points do not form a triangle.";
    else if (a == b && b == c)
        cout << "It is an Equilateral Triangle.";
    else if (a + b == c || b + c == a || a + c == b)
        cout << "It is a Right-Angle Triangle.";
    else if (a == b || b == c || a == c)
        cout << "It is an Isosceles Triangle.";
    else
        cout << "It is a Scalene Triangle.";
    return 0;
}