#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username;
    string password;
    bool success = false;

    cout << "\tGame Designer's Network";

    do
    {
        cout << "\nUsername: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;

        if (username == "Leonid" && password == "lol")
        {
            cout << "\nHey, Leonid.";
            success = true;
        }
        else if (username == "Lonja" && password == "lolL")
        {
            cout << "\nHey, Lonja.";
            success = true;
        }
        else if (username == "guest" || password == "guest")
        {
            cout << "\nWelcome, guest!";
            success = true;
        }
        else
        {
            cout << "\nYour login failed.";
        }
    } while (!success);

    return 0;
}