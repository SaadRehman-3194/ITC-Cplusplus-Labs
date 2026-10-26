// Write a C++ program that takes a character as input from the user. If the character is a lowercase letter, convert it into an uppercase letter. If it is an uppercase letter, convert it into a lowercase letter. Display the converted character.
#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter a character: ";
    cin >> c;
    if (c>='a' && c<='z')
    {
        c=c-32;
        cout << c;
    }        
    else if (c>='A' && c<='Z')
    {
        c=c+32;
        cout << c;
    }
    else 
        cout << "Enter a valid character";
    return 0;
}