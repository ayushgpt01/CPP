#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World !!" << endl;
    cout << "No. of Supplied Arguments - " << argc << endl;
    for (int i = 1; i < argc; i++)
    {
        cout << "Argument " << i << " - " << argv[i] << endl;
    }
    return 0;
}