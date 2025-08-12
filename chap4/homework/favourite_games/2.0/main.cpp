#include <iostream>
#include <windows.h>
#include <vector>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);

    vector<string>::const_iterator gameIter;
    vector<string> games;
    games.push_back("CS_2");
    games.push_back("World_of_Warships");
    games.push_back("Undertaile");

    cout << "\nЦе твої ігри:\n";
    for (gameIter = games.begin(); gameIter != games.end(); gameIter++)
    {
        cout << *gameIter << "\n";
    }

    while (true)
    {
        string answer;
        cout << "Хочеш додати чи видалити гру (a/d) ? \n";
        cin >> answer;
        transform(answer.begin(), answer.end(), answer.begin(), ::tolower);

        if (answer == "a")
        {
            string gameName;
            cout << "Введіть назву гри: ";
            cin >> gameName;

            games.push_back(gameName);
        }
        else if (answer == "d")
        {
            string gameName;
            cout << "Введіть гру на видалення: ";
            cin >> gameName;

            gameIter = find(games.begin(), games.end(), gameName);
            if (gameIter != games.end())
            {
                games.erase(gameIter);
            }
            else
            {
                cout << "Назва гри не знайдена!\n";
            }
        }
        else
        {
            cout << "Окееей\n";
            return 0;
        }

        cout << "\nЦе твої ігри:\n";
        for (gameIter = games.begin(); gameIter != games.end(); gameIter++)
        {
            cout << *gameIter << "\n";
        }
    }

    return 0;
}