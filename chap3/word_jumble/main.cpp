#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    const int LETTER_POINT = 10;
    const int HINT_POINTS = 5;

    unsigned int playerPoints;
    bool isHintUsed = false;
    enum fields {WORD, HINT, NUM_FIELDS};
    const int NUM_WORDS = 5;
    const string WORDS[NUM_WORDS][NUM_FIELDS] = {
        {"wall", "Do you feel you are banding your head against something?"},
        {"glasses", "These might help you see the answer"},
        {"labored", "Going slowly, is it?"},
        {"jumble", "It is what the game is all about."},
    };

    srand(static_cast<unsigned int>(time(0)));
    int choice = (rand() % NUM_WORDS);
    string theWord = WORDS[choice][WORD];
    string theHint = WORDS[choice][HINT];

    string jumble = theWord;
    int length = jumble.size();
    for (int i = 0; i < length; i++)
    {
        int index1 = rand() % length;
        int index2 = rand() % length;

        char temp = jumble[index1];
        jumble[index1] = jumble[index2];
        jumble[index2] = temp;
    }


    cout << "\t\t\tWelcome to Word JumЬle!\n\n";
    cout << "UnscramЫ е the l etters to make а word. \n";
    cout << "Enter 'hi nt' for а hi nt. \n";
    cout << "Enter 'quit' to quit the game. \n\n";
    cout << "The jumЫe is: " << jumble;
    string guess;
    cout << "\n\nYour guess: ";
    cin >> guess;


    while ((guess != theWord) && (guess != "quit"))
    {
        if (guess == "hint")
        {
            isHintUsed = true;
            cout << theHint;
        }
        else
        {
            cout << "Sorry, that is not it.";
        }

        cout << "\n\nYour guess: ";
        cin >> guess;
    }

    if (guess == theWord)
    {
        playerPoints = ( theWord.length() * LETTER_POINT ) - ( isHintUsed ? HINT_POINTS : 0 );
        cout << "\nThat is it! You guessed it!\n";
        cout << "\nYour points: " << playerPoints << ".\n";

    }
    cout << "\nThanks for playing.\n";

    return 0;
}