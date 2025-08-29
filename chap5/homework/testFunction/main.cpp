#include <iostream>
using namespace std;

int askNum(string prompt);
int askNum();

int main()
{
    int num1 = askNum("Enter a number: ");
    cout << "\nYou entered: " << num1 << endl;

    int num2 = askNum();
    cout << "\nYou entered: " << num2 << endl;

    return 0;
}

int askNum(string prompt)
{
    int num;
    cout << prompt;
    cin >> num;
    return num;
}

int askNum()
{
    return askNum("Enter (def): ");
}