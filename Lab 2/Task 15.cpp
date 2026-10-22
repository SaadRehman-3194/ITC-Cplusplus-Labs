/*
  Ask the user for a discount rate (in percentage) that will be applied to each product.
Calculate and Display Discounts.
For each above products, calculate the discounted price using the formula:
Discounted Price=Original Price−(Original Price×Discount Rate/100)
Display the original price and the discounted price for each product.
*/
#include <iostream>
using namespace std;
int main()
{
    float p1,p2,p3,r,d1,d2,d3; /* p = Original Price r = Discount rate
    d = Discounted Price*/
    cout << "Enter the price of 3 produds: " << endl;
    cout << "Price of product 1: ";
    cin >> p1;
    cout << "Price of product 2: ";
    cin >> p2;
    cout << "Price of product 3: ";
    cin >> p3;
    cout << "Enter Discount rate in percentage: ";
    cin >> r;
    d1 = p1 - (p1*r/100);
    d2 = p2 - (p2*r/100);
    d3 = p3 - (p3*r/100);
    cout << endl << "--- Discount Calculation ---" << endl;
    cout << "product 1: Original Pricce = " << p1 << ",Discount Price = " << d1 << endl;
    cout << "product 2: Original Pricce = " << p2 << ",Discount Price = " << d2 << endl;
    cout << "product 3: Original Pricce = " << p3 << ",Discount Price = " << d3;
    return 0;
}