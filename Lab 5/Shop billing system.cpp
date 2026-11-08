/*
   Billing system
*/
#include<iostream>
using namespace std;
int main()
{
	int BA, MT, DC = 250;// BA = Bill Amount, MT = Membership type, DC = Delivery Charges
	cout << "Enter Membership (1 = Regular, 2 = Silver, 3 = Gold): ";
	cin >> MT;
	cout << "Enter bill amount (Rs.): ";
	cin >> BA;
	if (MT != 1 && MT != 2 && MT != 3)
		cout << "Invalid Membership";
	else if (BA >= 10000 && MT == 1) // Regular discount
	{
		cout << "Discount = 10% : " << (10 * BA) / 100;
		cout << endl << "Amount after discount: " << BA - (10 * BA) / 100;
		if (BA > 5000)
			cout << endl << "Delivery charges: 0" << endl << "Total bill: " << BA - (10 * BA) / 100;
		else
			cout << endl << "Delivery charges: 250" << endl << "Total bill: " << (BA - (10 * BA) / 100) + DC;
     }
	else if (BA < 10000 && MT == 1)
	{
		cout << "Discount = 5% : " << (5 * BA) / 100;
		cout << endl << "Amount after discount: " << BA - (5 * BA) / 100;
		if (BA > 5000)
			cout << endl << "Delivery charges: 0" << endl << "Total bill: " << BA - (5 * BA) / 100;
		else
			cout << endl << "Delivery charges: 250" << endl << "Total bill: " << (BA - (5 * BA) / 100) + DC;
	}
	else if (BA >= 10000 && MT == 2) // Silver Member discount 
	{
		cout << "Discount = 15% : " << (15 * BA) / 100;
		cout << endl << "Amount after discount: " << BA - (15 * BA) / 100;
		if (BA > 5000)
			cout << endl << "Delivery charges: 0" << endl << "Total bill: " << BA - (15 * BA) / 100;
		else
			cout << endl << "Delivery charges: 250" << endl << "Total bill: " << (BA - (15 * BA) / 100) + DC;
	}
	else if (BA < 10000 && MT == 2)
	{
		cout << "Discount = 10% : " << (10 * BA) / 100;
		cout << endl << "Amount after discount: " << BA - (10 * BA) / 100;
		if (BA > 5000)
			cout << endl << "Delivery charges: 0" << endl << "Total bill: " << BA - (10 * BA) / 100;
		else
			cout << endl << "Delivery charges: 250" << endl << "Total bill: " << (BA - (10 * BA) / 100) + DC;
	}
	else if (BA >= 10000 && MT == 3) // Gold member discount
	{
		cout << "Discount = 20% : " << (20 * BA) / 100;
		cout << endl << "Amount after discount: " << BA - (20 * BA) / 100;
		if (BA > 5000)
			cout << endl << "Delivery charges: 0" << endl << "Total bill: " << BA - (20 * BA) / 100;
		else
			cout << endl << "Delivery charges: 0" << endl << "Total bill: " << (BA - (20 * BA) / 100);
	}
	else if (BA < 10000 && MT == 3)
	{
		cout << "Discount = 15% : " << (15 * BA) / 100;
		cout << endl << "Amount after discount: " << BA - (15 * BA) / 100;
		if (BA > 5000 && MT == 3)
			cout << endl << "Delivery charges: 0" << endl << "Total bill: " << BA - (15 * BA) / 100;
		else
			cout << endl << "Delivery charges: 0" << endl << "Total bill: " << (BA - (15 * BA) / 100);
	}
	return 0;
}