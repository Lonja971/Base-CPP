#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    
    for (size_t i = 1; i <= 20; i++)
    {
        int randomNumber = rand();

        cout << randomNumber << endl;
    }

    return 0;
}