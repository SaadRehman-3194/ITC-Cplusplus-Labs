/*
Use cout to evaluate and display results of expressions with different operator precedence.
*/
#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter a= ";
	cin >> a;
	cout << endl << "Enter b= ";
	cin >> b;
	cout << endl << "Enter c= ";
	cin >> c;
	cout << endl << "a+b*c = " << a+b*c;
	cout << endl <<"(a+b)*c = " << (a+b)*c;
	cout << endl << "a-b/c = " << a-b/c;
	cout << endl << "(a-b/)c = " << (a-b)/c;
	return 0;
}
