#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Difficulty Levels\n\n";

    string difficultLevels[3] = {"Easy", "Normal", "Hard"};
    size_t difficultLevelsSize = sizeof(difficultLevels) / sizeof(difficultLevels[0]);

    for (int i = 0; i < difficultLevelsSize; i++)
    {
        cout << i << " - " << difficultLevels[i] << "\n";
    }

    int choice;

    cout << "Choice: ";
    cin >> choice;
    
    if (choice >= 0 && choice < difficultLevelsSize)
    {
        cout << "You picked " << difficultLevels[choice] << ".";
    }
    else{
        cout << "Takogo nemaje";
    }

}