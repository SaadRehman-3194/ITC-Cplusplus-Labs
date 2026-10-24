/*
  Write a C++ program that creates variables for a result sheet and input their value from user and print them in a formatted manner.
*/
#include <iostream>
using namespace std;
int main()
{
	int c, m, p, t;
	cout << "Enter marks of chemistry: ";
	cin >> c;
	cout << "Enter marks of Maths: ";
	cin >> m;
	cout << "Enter marks of physics: ";
	cin >> p;
	t = c + m + p;
	cout << "Chemistry \t Maths \t Physics \t Total" << endl;
	cout << c << "\t\t" << m << "\t" << p << "\t\t" << t; 
	return 0;
}