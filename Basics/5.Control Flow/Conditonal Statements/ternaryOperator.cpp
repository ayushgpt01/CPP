#include <iostream>
using namespace std;

int main()
{
    cout << "Enter two numbers to subtract : ";
    int num1, num2;
    cin >> num1 >> num2;
    int result = (num1 > num2) ? num1 - num2 : num2 - num1;
    cout << "Subtracted result is " << result;

    return 0;
}