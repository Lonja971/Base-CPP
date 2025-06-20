#include <iostream>
using namespace std;

int main()
{
    if (true)
    {
        cout << "This is TRUE\n\n";
    }
    
    int score = 1000;
    if (score){
        cout << "Score: " << score << "\n\n";
    }

    int userNum;

    cin >> userNum;

    switch (userNum)
    {
        case 1:
            cout << "1" << endl;
            break;
        case 2:
            cout << "2" << endl;
            break;
        default:
            cout << "XZ" << endl;
    }
}