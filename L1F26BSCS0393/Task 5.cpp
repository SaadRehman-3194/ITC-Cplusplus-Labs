/*
  Name: Saad Rehman
  Roll no: L1F26BSCS0393
  Evaluate and print the result of each expression
  */
#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cout << "Enter a = ";
	cin >> a;
	cout << endl << "Enter b = ";
	cin >> b;
	cout << endl << "Enter c = ";
	cin >> c;
	cout << endl << "Enter d = ";
	cin >> d;
	cout << endl << "(a + b) * (c / d) = " << (a + b) * (c / d);
	cout << endl << "a - b % c * d = " << a - b % c * d;
	cout << endl << "a / (b / c) + d = " << a / (b / c) + d;
	return 0;
}