/*
Write a program using only cout to compute the area of a rectangle where length = 10 and width = 5.
*/
#include <iostream>
using namespace std;
int main()
{
	int l,b;
        cout << "Enter Length of Rectangle = ";
        cin >> l;
        cout << "Enter width of Rectangle = ";
        cin >> b;
	cout << "Area of rectangle = " << l*b;
	return 0; 
}
