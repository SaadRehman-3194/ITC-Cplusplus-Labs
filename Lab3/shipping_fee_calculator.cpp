/*
   Write a program that calculates the shipping fee based on the weight of a package.
•For weights up to 5 kg, print "Shipping fee: $5."
•For weights between 5 kg and 20 kg, print "Shipping fee: $10."
•For weights over 20 kg, print "Shipping fee: $20."
*/
#include <iostream>
using namespace std;
int main()
{
    float w;
    cout << "Enter weight of package in kgs: ";
    cin >> w;
    if (w < 5)
        cout << "Shipping charges are $5.";
    else if (w >= 5 && w <= 20)
        cout << "Shipping charges are $10.";
    else 
        cout << "Shipping charges are $20.";
    return 0;
}