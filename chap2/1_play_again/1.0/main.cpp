#include <iostream>
using namespace std;

int main()
{
    char again = 'y';

    while (again == 'y')
    {
        cout << "\nPlayed an exiting game**";
        cout << "\nDo you want to play again? (y/n): ";
        cin >> again;
    }

    cout << "\nOkey, bye.";
    return 0;
}