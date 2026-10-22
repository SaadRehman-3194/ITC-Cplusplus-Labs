/*
  Write a C++ program that creates 4 integer variables name Fuel, Rent, Bills & Total,
  the program must input the first three variables and calculates their sum and print them in a tabular form.
*/
#include <iostream>
using namespace std;
int main()
{
	int f, r, b, t;
	cout << "Enter Value of Fuel: ";
	cin >> f;
	cout << "Enter value of rent: ";
	cin >> r;
	cout << "Enter value of bill: ";
	cin >> b;
	t = f + r + b;
	cout << "FUEL:" << "\t\t" << f << endl << "Rent:" << "\t\t" << r << endl << "Bill:" << "\t\t" << b << endl << "Total:" << "\t\t" << t;
	return 0;
}