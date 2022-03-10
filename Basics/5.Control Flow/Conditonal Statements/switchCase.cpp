#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number between 1 and 7 : ";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Sunday";
        break;
    case 2:
        cout << "Monday";
        break;
    case 3:
        cout << "Tuesday";
        break;
    case 4:
        cout << "Wednesday";
        break;
    case 5:
        cout << "Thursday";
        break;
    case 6:
        cout << "Friday";
        break;
    case 7:
        cout << "Saturday";
        break;
    default:
        cout << "Not a valid number";
    }
    return 0;
}