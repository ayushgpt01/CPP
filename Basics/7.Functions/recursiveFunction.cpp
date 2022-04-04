#include <iostream>
using namespace std;

unsigned long long factorial(unsigned long long);

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    unsigned long long fac = factorial(n);
    cout << "\nFactorial of "<< n << " is " << fac << endl;
    return 0;
}

unsigned long long factorial(unsigned long long n)
{
    if (n == 0)
    {
        return 1;
    }
    return factorial(n - 1) * n;
}