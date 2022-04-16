#include <iostream>
using namespace std;

int main()
{
    // At first glance there is nothing wrong with this code but it can result in infinite loop
    float f = 0.2;
    // floats are internally stored as 2.99999 or 3.0000001 so this check fails and it becomes an infinite loop
    while (f != 3.0) // a better way is to write (f <= 3.0)
    {
        cout << "Y";
        f += 0.2;
    }
    cout << "N";
    return 0;
}