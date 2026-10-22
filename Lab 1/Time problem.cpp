/*
  Convert 10,000 seconds into hours, minutes, and seconds in one cout.
*/
#include <iostream>
using namespace std;
int main()
{
	int sec, hours, mins;
	cout << "Enter seconds = ";
	cin >> sec;
	cout << sec / 3600 << " hours " << (sec % 3600) / 60 << "mins";
	return 0;
}