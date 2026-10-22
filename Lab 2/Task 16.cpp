/*
     	Write a program that should display for each product:
o	Original Price
o	Discounted Price
o	Final Price (after tax)
At the end, display the total amount the customer has to pay for all products.
*/
#include <iostream>
using namespace std;
int main()
{
    float p1,p2,p3,r,d1,d2,d3,fp1,fp2,fp3; /* p = Original Price r = Discount rate d = Discounted Price fp = Final price */
    cout << "Enter number of products (max 5): 3 " << endl;
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
    fp1 = d1 + (d1*0.08);
    fp2 = d2 + (d2*0.08);
    fp3 = d3 + (d3*0.08);
    cout << endl << "Bill summary " << endl;
    cout << "product 1: Original Pricce = " << p1 << ",Discount Price = " << d1 << ",Final price with tax = " << fp1 << endl;
    cout << "product 2: Original Pricce = " << p2 << ",Discount Price = " << d2 << ",Final price with tax = " << fp2 << endl;
    cout << "product 3: Original Pricce = " << p3 << ",Discount Price = " << d3 << ",Final price with tax = " << fp3;
    return 0;
}