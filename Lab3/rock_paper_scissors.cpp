/*
   Write and run a program that plays the game of “Rock, paper, scissors.” In this game, two players simultaneously say (or display a hand symbol representing) 
   either “rock,” “paper,” or “scissors.” The winner is the one whose choice dominates the other. The rules are: paper dominates (wraps) rock, rock dominates (breaks)
   scissors, and scissors dominate (cut) paper. You can use 1=rock,2=paper,3=scissors.
*/
#include <iostream>
using namespace std;
int main ()
{
    int n1,n2;
    cout << "Enter your choises as 1 2 or 3: ";
    cin >> n1 >> n2;
    if (n1 < 1 || n1 > 3 || n2 < 1 || n2 > 3)
        cout << "Invalid option";
    else if (n1 == 1 && n2 == 3)
        cout << "First player win!"; // 1 = rock 
    else if (n1 == 2 && n2 == 1)
        cout << "First player win!"; // 2 = paper
    else if (n1 == 3 && n2 == 2)
        cout << "First player win!"; // 3 = sissors
    else if (n1 == n2)
        cout << "Draw";
    else 
        cout << "player two wins";
    return 0;
}