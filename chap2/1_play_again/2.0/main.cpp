#include <iostream>
using namespace std;

int main()
{
    char again;

    do
    {
        cout << "\nPlayed an exiting game**";
        cout << "\nDo you want to play again? (y/n): ";
        cin >> again; 
    }
    while (again == 'y');

    cout << "\nOkey, bye.";
    return 0;
}