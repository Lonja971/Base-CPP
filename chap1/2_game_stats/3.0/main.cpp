#include <iostream>
using namespace std;

int main()
{
    const int ALIEN_POINTS = 150;
    int alientsKilled = 10;

    int score = alientsKilled * ALIEN_POINTS;
    cout << "score: " << score << endl;

    enum difficulty { NOVICE, EASY, NORMAL, HARD, UNBEATABLE };
    difficulty myDifficulty = EASY;

    enum shipCost { FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50 };
    shipCost myShipCost = BOMBER_COST;

    cout << "\nTo upgrade my ship to a Cruiser will cost "
    << (CRUISER_COST - myShipCost) << " Resource Points.\n";

    return 0;
}