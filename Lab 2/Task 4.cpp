/*
  Write a C++ code to calculate the area and perimeter of the rectangle. The program should the users to input the sides of the rectangle.
  It should then calculate the area and perimeter of the rectangle and display the result.
*/
#include <iostream>
using namespace std;
int main()
{
	int l, w, a, p;
	cout << "Enter length and Width of Rectangle: ";
	cin >> l >> w;
	a = l * w;
	p = 2*(l + w);
	cout << "Area = " << a << " Perimeter = " << p;
	return 0;
}