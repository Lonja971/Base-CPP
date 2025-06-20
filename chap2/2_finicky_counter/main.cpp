#include <iostream>
using namespace std;

int main()
{
    int num = 0;

    while (true)
    {
        num++;

        if (num > 10){
            break;
        }
        else if (num == 5)
        {
            continue;
        }
        else
        {
            cout << num << endl;
        }
    }

    return 0;
}