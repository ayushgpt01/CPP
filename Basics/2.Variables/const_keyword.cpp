#include <iostream>
using namespace std;

int main()
{
    // using const keyword
    cout << "Enter the number of days to rent the room ";
    int daysToRent;
    cin >> daysToRent;

    const float price = 200;
    const float taxRate = 0.28;

    cout << "\nTotal Cost of stay"<<endl;
    cout << "\nDays to stay = "<<daysToRent;
    cout << "\nPrice per day-night = $"<<price;
    cout << "\nCost = $"<<price * daysToRent;
    cout << "\nTax = $"<<price * daysToRent * taxRate;
    cout << "\n ======================= \n";
    cout << "\nTotal Cost = $"<<(price * daysToRent) + (price * daysToRent * taxRate);

    return 0;
}