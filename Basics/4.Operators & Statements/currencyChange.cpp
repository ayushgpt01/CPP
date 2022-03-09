#include <iostream>
using namespace std;

int main()
{
    const int dollarRate = 100;
    const int quarterRate = 25;
    const int dimeRate = 10;
    const int nickelRate = 5;
    const int pennyRate = 1;

    cout << "Currency Change Conversion System (in USD)" << endl;
    cout << "Enter an amount in cents: ";
    int cents{0};
    cin >> cents;

    cout << "\nYou can provide the change as follows :" << endl;
    int left{0};

    cout << "Dollars : " << cents / dollarRate << endl;
    left = cents % dollarRate;
    cout << "Quarters : " << left / quarterRate << endl;
    left %= quarterRate;
    cout << "Dime : " << left / dimeRate << endl;
    left %= dimeRate;
    cout << "Nickel : " << left / nickelRate << endl;
    left %= nickelRate;
    cout << "Penny : " << left << endl;

    return 0;
}