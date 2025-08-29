#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
#include <random>
using namespace std;

char askLoverChar(string prompt);
bool areCharsEqual(char a, char b);

int main()
{
    const int MAX_WRONG = 8;
    vector<string> words;
    words.push_back("guess");
    words.push_back("hangman");
    words.push_back("difficult");

    srand(static_cast<unsigned int>(time(0)));
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(words.begin(), words.end(), g);

    const string THE_WORD = words[0];

    int wrong = 0;
    string soFar(THE_WORD.size(), '-');
    string used = "";
    cout << "Welcome to Hangman. Good luck!\n";

    while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
    {
        cout << "\n\nYou have " << (MAX_WRONG - wrong);
        cout << " incorrect guesses left.\n";
        cout << "\nYou are used the following letters: \n" << used << endl;
        cout << "\nSo far, whe word is: \n" << soFar << endl;

        char guess;
        guess = askLoverChar("\n\nEnter your quess: ");

        while (used.find(guess) != string::npos)
        {
            cout << "\nYou are already guessed " << guess << endl;
            guess = askLoverChar("\n\nEnter your quess: ");
        }

        used += guess;

        if (THE_WORD.find(guess) != string::npos)
        {
            cout << "Yhat is right! " << guess << " is in the word.\n";

            for (int i = 0; i < THE_WORD.length(); ++i)
            {
                if (areCharsEqual(THE_WORD[i], guess))
                {
                    soFar[i] = guess;
                }
            }
        }
        else
        {
            cout << "Sorry, " << guess << " isnt in the word.\n";
            ++wrong;
        }
    }

    if (wrong == MAX_WRONG)
    {
        cout << "\nYou are been hanged!";
    }
    else
    {
        cout << "\nYou guessed it!";
    }

    cout << "\nThe word was: " << THE_WORD << endl;

    return 0;
}

char askLoverChar(string prompt)
{
    char ch;
    cout << prompt;
    cin >> ch;
    ch = tolower(ch);

    return ch;
}

bool areCharsEqual(char a, char b)
{
    return a == b;
}