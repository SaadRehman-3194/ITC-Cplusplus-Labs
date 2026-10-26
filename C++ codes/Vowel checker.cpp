/*Write a C++ program to input an alphabet and check if it’s a vowel or not. (Note a, e, i, o, u are known as vowel).*/

#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter a character; ";
    cin >> c;
    if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
    {
        cout << c << " is vowel";
    }
    else
    {
        cout << c << " is consunent";
    }
    return 0;
}