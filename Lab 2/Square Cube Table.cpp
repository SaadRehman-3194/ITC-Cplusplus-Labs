/*
  Write a C++ program to ask the user for a number and then calculate    the square and cube of the next five number including that number.     Display the result in the tabular form.
*/
#include <iostream>
using namespace std;
int main()
{
    int n,sq,cube;
    cout << "Enter a number whose sum and cube to be found: ";
    cin >> n;
    sq = n*n;
    cube = n*n*n;
    cout << "Input = " << n << endl << "No \t" << "Square \t" << "Cube" << endl << n << "\t" << sq << "\t\t" << cube << endl; 
    n= n+1;
    sq = n*n;
    cube = n*n*n;
    cout << n << "\t" << sq << "\t\t" << cube << endl;
    n= n+1;
    sq = n*n;
    cube = n*n*n;
    cout << n << "\t" << sq << "\t\t" << cube << endl;
    n= n+1;
    sq = n*n;
    cube = n*n*n;
    cout << n << "\t" << sq << "\t\t" << cube << endl;
    n= n+1;
    sq = n*n;
    cube = n*n*n;
    cout << n << "\t" << sq << "\t\t" << cube << endl;
    n= n+1;
    sq = n*n;
    cube = n*n*n;
    cout << n << "\t" << sq << "\t\t" << cube << endl;
    return 0;
}