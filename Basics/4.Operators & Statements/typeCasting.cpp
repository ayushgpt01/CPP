#include <iostream>
using namespace std;

int main()
{
    int totalAmount = 98;
    int observations = 10;
    double average = 0;
    average = totalAmount / observations;
    cout << "Average is : " << average << endl;

    // average = (double)totalAmount / observations;  //old style of casting. Has no restrictions
    average = static_cast<double>(totalAmount) / observations;
    cout << "Average is : " << average << endl;

    return 0;
}