#include <iostream>
using namespace std;

int main()
{
    float firstNum;
    float secondNum;
    float thirdNum;
    
    cout << "Введіть перше число:\n";
    cin >> firstNum;
    cout << "Введіть друге число:\n";
    cin >> secondNum;
    cout << "Введіть третє число:\n";
    cin >> thirdNum;
    
    float finalNum;

    finalNum = (firstNum + secondNum + thirdNum) / 3;
    cout << "Результат: " << finalNum << endl;
}