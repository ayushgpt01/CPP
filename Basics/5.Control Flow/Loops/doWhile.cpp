#include <iostream>
using namespace std;

int main()
{
    int number{};
    do
    {
        cout << "Enter a number between 1 and 5 to keep entering: ";
        cin >> number;
    } while (number >= 1 && number <= 5);

    cout << "Nice!!" << endl;
    return 0;
}