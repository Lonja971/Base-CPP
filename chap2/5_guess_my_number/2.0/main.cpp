#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = rand() % 100 + 1;
    int tries = 0;
    int guess;

    cout << "\t Welcome to Guess My Number\n";

    do
    {
        cout << "Enter a guess: ";
        cin >> guess;
        ++tries;

        if (guess > secretNumber)
        {
            cout << "Too high!" << endl;
        }
        else if (guess < secretNumber)
        {
            cout << "Too low!" << endl;
        }
        else
        {
            cout << "Thats it! You did it in " << tries << " attempts!" << endl;
        }

    } while (guess != secretNumber);

    return 0;
}