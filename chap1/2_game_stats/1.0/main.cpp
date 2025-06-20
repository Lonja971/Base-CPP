#include <iostream>
using namespace std;

int main()
{
    int score;
    double distance;
    char playAgain;
    bool shieldUp;
    short lives, alientsKilled;

    score = 0;
    distance = 1200.76;
    playAgain = 'y';
    shieldUp = true;
    lives = 3;
    alientsKilled = 10;

    double engineTemp = 6572.89;

    cout << "\nscore: " << score << endl;
    cout << "\ndistance: " << distance << endl;
    cout << "\nplayAgain: " << playAgain << endl;
    cout << "\nlives: " << lives << endl;
    cout << "\nalientKislled: " << alientsKilled << endl;
    cout << "\nengineTemp: " << engineTemp << endl;
    
    int fuel;
    cout << "How much fuel? ";
    cin >> fuel;
    cout << "\nfuel: " << fuel << endl;

    typedef unsigned short int ushort;
    ushort bonus = 10;

    cout << "\nbonus: " << bonus << endl;
    
    return 0;
}