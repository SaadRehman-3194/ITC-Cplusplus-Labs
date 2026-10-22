/*
 Evaluate the quadratic expression ax^2 + bx + c for a = 2, b = 3, c = 4, x = 5.
*/
#include <iostream>
using namespace std;
int main()
{
	int a, b, c, x, res;
	cout << "Enter a = ";
	cin >> a;
	cout << endl << "Enter b = ";
	cin >> b;
	cout << endl << "Enter c = ";
	cin >> c;
	cout << endl << "Enter x = ";
	cin >> x;
	res = a * x * x + b * x + c;
	cout << "Result = " << res;
	return 0;
}