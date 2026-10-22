/*
  Print the result of a^2 + b^2 + 2ab 
*/
#include <iostream>
using namespace std;
int main()
{
	int a, b, res;
	cout << "Enter a = ";
	cin >> a;
	cout << endl << "Enter b = ";
	cin >> b;
	res = (a * a) + (b * b) + 2 * a * b;
	cout << endl << "result = " << res;
	return 0;
}