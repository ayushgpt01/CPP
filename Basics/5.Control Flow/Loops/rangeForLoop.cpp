#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Range-based for loop
    // Added in C++11
    int scores[]{100, 98, 34, 45, 75, 26, 97, 78, 89, 10};

    for (int score : scores)
    {
        cout << score << " ";
    }

    // using auto keyword
    cout << "\nWith auto keyword\n";
    for (auto score : scores)
    {
        cout << score << " ";
    }

    // can be used with vectors
    cout << "\nVector : " << endl;
    vector<double> temps{48.2, 24.6, 23, 30, 0, 10.5};
    double totalTemp{0};
    for (auto temp : temps)
    {
        totalTemp += temp;
        cout << temp << " ";
    }
    cout << "\nAverage temp : " << totalTemp / temps.size() << endl;

    // can be used with list initializers
    cout << "Using initializer list : " << endl;
    totalTemp = 0;
    for (auto temp : {48, 24, 23, 30, 0, 10})
    {
        totalTemp += temp;
        cout << temp << " ";
    }
    cout << "\nAverage temp : " << totalTemp / temps.size() << endl;
    return 0;
}