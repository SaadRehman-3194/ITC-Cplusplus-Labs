/*
   Write a program that reads a student's marks in three subjects (out of 100 each) and calculates the average.
•If the average is 40 or above, print "Pass."
•If the average is below 40, print "Fail."
•If any individual mark is below 33, print "Fail due to subject score."
*/
#include <iostream>
using namespace std;
int main()
{
    int m1,m2,m3;
    float avg;
    cout << "Enter marks of three subjects: ";
    cin >> m1 >> m2 >> m3;
    avg = (m1+m2+m3)/3.0;
    if (m1 >= 33 && m2 >= 33 && m3 >= 33)
        if (avg >=40)
            cout << "Pass";
        else 
            cout <<"Fail";
    else
        cout << "Fail due to subject score";
    return 0;
}