/*
   Write a C++ program in which take input an integer from the user using cin and display its square using cout.
*/
#include <iostream>
using namespace std;
int main()
{
	int num,sq;
	cout << "Enter a number: ";
	cin >> num;
	sq = num * num;
	cout << "Square of " << num << " is " << sq;
	return 0;
}