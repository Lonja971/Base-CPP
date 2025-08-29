#include <iostream>
#include <string>
using namespace std;

string askText(string prompt);
int askNumber(string prompt);
void tellStory(string name, string noun, int number, string bodyPart, string verb);

int main()
{
    cout << "Welcome to Mad Lib.\n\n";
    cout << "Answer the following questions to help create a new stroy.\n";

    string name = askText("Please enter a name: ");
    string noun = askText("Please enter a pluran noun: ");
    int number = askNumber("Please enter a number: ");
    string bodyPart = askText("Please enter a body part: ");
    string verb = askText("Please enter a verb: ");

    tellStory(name, noun, number, bodyPart, verb);

    return 0;
}

string askText(string prompt)
{
    string text;
    cout << prompt;
    cin >> text;

    return text;
}

int askNumber(string prompt)
{
    int num;
    cout << prompt;
    cin >> num;

    return num;
}

void tellStory(string name, string noun, int number, string bodyPart, string verb)
{
    cout << "\nHere is your story:\n";
    cout << name << "\n";
    cout << noun << "\n";
    cout << number << "\n";
    cout << bodyPart << "\n";
    cout << verb << "\n";
}