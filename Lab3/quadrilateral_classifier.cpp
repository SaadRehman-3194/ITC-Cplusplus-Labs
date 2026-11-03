/*
   Write a program which takes as input 4 points and tell whether these points are the coordinates of Rectangle, Square or Quadrilateral.
*/
#include <iostream>
using namespace std;
int main ()
{
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cout << "Enter X and Y co-ordinates of 4 sides of the figure x y for each: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    // Length of four sides
    int s12 = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    int s23 = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2);
    int s34 = (x4 - x3) * (x4 - x3) + (y4 - y3) * (y4 - y3);
    int s41 = (x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4);
    // lengths of the two diagonals
    int d13 = (x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1);
    int d24 = (x4 - x2) * (x4 - x2) + (y4 - y2) * (y4 - y2);
    
    if(s12 == s34 && s23 == s41 && d13 == d24 && s12 == s23)
        cout << "Square";
    else if (s12 == s34 && s23 == s41 && d13 == d24)
        cout << "Rectangle";
    else 
        cout << "Quadrilateral";
    return 0;
}