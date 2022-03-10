#include <iostream>
using namespace std;

int main()
{
    cout << "Natural numbers from 1 to 10" << endl;
    for (int i = 1; i <= 10; i++)
        cout << i << " ";
    
    cout << "\nOdd numbers from 1 to 100" << endl;
    for (int i = 1; i <= 100; i += 2)
    {
        cout << i << " ";
    }
    return 0;
}