#include<iostream>
using namespace std;

// Time Complexity - 
// T(n) = T(n-1) + T(n-2) + c
// T(n) = O(2^n)
int fibonacci(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return (fibonacci(n-1) + fibonacci(n-2));
}

int main() {
    int n {0};
    cout << "Enter number of elements in fibonacci series ";
    cin >> n;
    cout << "\nThe " << n << "th element of fibonacci series is " << fibonacci(n-1) << endl;
    return 0;
}