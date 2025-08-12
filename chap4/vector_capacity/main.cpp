#include <iostream>
#include<vector>
using namespace std;

int main()
{
    cout << "Creating a 10 element vector to hold scores.\n";

    vector<int> scores(9, 0); // инициализирую все 10 элементов в значении О

    cout << "Vector size is :" << scores.size() << endl;
    cout << "Vector capacity is:" << scores.capacity() << endl;
    cout << "Adding a score.\n";

    scores.push_back(0); // в ответ на увеличение вектора память перераспределяется

    cout << "Vector size is :" << scores.size() << endl;
    cout << "Vector capacity is:" << scores.capacity() << endl;
    cout << "Adding a score.\n";

    scores.push_back(0); // в ответ на увеличение вектора память перераспределяется

    cout << "Vector size is :" << scores.size() << endl;
    cout << "Vector capacity is:" << scores.capacity() << endl;
}
