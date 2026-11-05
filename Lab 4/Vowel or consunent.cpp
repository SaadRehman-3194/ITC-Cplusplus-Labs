/*
  Write a C++ program that asks the user to enter an alphabet letter and tells whether it is a vowel or a consonant.
*/
#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter a character: ";
    cin >> c;
    switch (c)
        {
            case 'a': case 'A':
            cout << "Vowel";
            break;
            case 'e': case 'E':
            cout << "Vowel";
            break;
            case 'i': case 'I':
            cout << "Vowel";
            break;
            case 'o': case 'O':
            cout << "Vowel";
            break;
            case 'u': case 'U':
            cout << "Vowel";
            break;
            default:
            cout << "Consonant";
        }
    return 0;
}