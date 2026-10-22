/*
  Compute (a + b)^2 for a = 7, b = 9, using arithmetic only (no pow).
*/
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Enter a = ";
	cin >> a;
	cout << endl << "Enter b = ";
	cin >> b;
	cout << endl << "Result = " << (a + b) * (a + b);
	return 0;
}