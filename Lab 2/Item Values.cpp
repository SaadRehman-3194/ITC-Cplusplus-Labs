/*
  Write a C++ program that inputs price and quantity of the following items and print the total value.
  The items are Wheat, Rice & Sugar. (Value = Price * Quantity)
*/
#include <iostream>
using namespace std;
int main()
{
	int wp, rp, sp, wq, rq, sq, wv,rv,sv;
	cout << "Enter Price of Wheat: ";
	cin >> wp;                          // wp = wheat price
	cout << "Enter Quantity of Wheat: ";
	cin >> wq;                         // wq = wheat quantity
	cout << "Enter price of Rice: ";
	cin >> rp;                         // rp = rice price
	cout << "Enter the quantity of rice: ";
	cin >> rq;                         // rq = rice quantity
	cout << "Enter the price of Sugar: ";
	cin >> sp;                         // sp = sugar price
	cout << "Enter the Quantity of Sugar: ";
	cin >> sq;                         // sq = sugar quantity
	wv = wp * wq;                      // wv = wheat value
	rv = rp * rq;                      // rv = rice value 
	sv = sp * sq;                      // sv = sugal value
	cout << "Value of wheat = " << wv << endl;
	cout << "Value of rice = " << rv << endl;
	cout << "Value of Sugar = " << sv;
	return 0;
}