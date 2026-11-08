/*
  Q.2: Insurance company premium
*/
#include <iostream>
using namespace std;
int main()
{
    int age,exp,pr; // exp=experience, pr=premium.
    cout << "Enter your age: ";
    cin >> age;
    if (age < 18 ) // checking if the user is eligible or not.
        cout << "Not eligible for insurance";
    else
    {
        cout << "Enter years of driving experience: ";
        cin >> exp;
        if (exp < 2) // Experience less than 2 years
        {
            pr = 10000;
            cout << "High risk catagory";
        }
        else if (exp >=2 && exp <=4) // Experience between 2 & 4 years
        {
            pr = 6000;
            cout << "Medium risk catagory";
        }
        else // For experience more than 4 years
        {
            pr = 3000;
            cout << "Low risk catagory";
        }
        if (age >= 60) // Senior driver surcharge checker
        {
            pr = pr + 1000;
            cout << endl << "Senior Driver Surcharge Applied.";
        }
        cout << endl << "Premium = " << pr;
    }
    return 0;
 }