/*
  Get hours and minutes as input from user, and calculates the total number of minutes.
*/
#include <iostream>
using namespace std;
int main()
{
    int h,m,tm;
    cout << "Enter hours: ";
    cin >> h;
    cout << "Enter minutes: ";
    cin >> m;
    h = h*60;
    cout << "Total minutes = " << h+m;
    return 0;
}