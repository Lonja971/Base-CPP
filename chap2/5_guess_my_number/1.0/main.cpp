#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = (rand() % 100) + 1;
    bool isQuessed = false;
    int attempts = 0;
    
    cout << "\t Welcome to Guess My Number\n";

    while (!isQuessed)
    {
        int userNum;
        
        cout << "Enter a guess: ";
        cin >> userNum;
        
        if (userNum > randomNumber)
        {
            cout << "Too high!" << endl;
        }
        else if (userNum < randomNumber)
        {
            cout << "Too low!" << endl;
        }
        else if(userNum == randomNumber)
        {
            isQuessed = true;
        }

        attempts++;
    }

    cout << "Thats it! You did it in " << attempts << " attempts!" << endl;
    return 0;
}