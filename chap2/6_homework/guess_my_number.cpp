#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int compNumber;
    int secretNumber;
    int tries = 0;

    cout << "Hey, choose your number from 1 to 100: ";
    cin >> secretNumber;

    do
    {
        compNumber = (rand() % 100) + 1;
        ++tries;
        cout << "--Comp choose: " << compNumber << endl;

        if (compNumber > secretNumber)
        {
            cout << "This is too high!" << endl;
        }
        else if (compNumber < secretNumber)
        {
            cout << "This is too low!" << endl;
        }
        else
        {
            cout << "Comp did it in " << tries << " tries!" << endl;
        }

    } while (secretNumber != compNumber);
    
    return 0;
}