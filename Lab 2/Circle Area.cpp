/*
  Write a C++ program that reads the radius of a circle (as a float) from the user and calculates the area.
  The program should display the area. Formula: A = π r² (π =3.14)
*/
#include <iostream>
using namespace std;
int main()
{
	float pi = 3.14;
	float r, A;
	cout << "Enter Radius of the circle: ";
	cin >> r;
	A = pi *r*r;
	cout << "Area = " << A;
	return 0;
}