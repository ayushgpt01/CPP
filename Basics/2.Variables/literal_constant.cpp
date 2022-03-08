#include <iostream>
using namespace std;

int main()
{
    // literal constants
    cout << "Enter the number of days to rent the room ";
    int daysToRent;
    cin >> daysToRent;

    cout << "\nTotal Cost of stay"<<endl;
    cout << "\nDays to stay = "<<daysToRent;
    cout << "\nPrice per day-night = $"<<200; // 200 is literal constant
    cout << "\nCost = $"<<200 * daysToRent;
    cout << "\nTax = $"<<200 * daysToRent * 0.28;
    cout << "\n ======================= \n";
    cout << "\nTotal Cost = $"<<(200 * daysToRent) + (200 * daysToRent * 0.28);

    return 0;
}