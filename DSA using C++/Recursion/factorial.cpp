#include<iostream>
using namespace std;

// T(n) = T(n-1) + c = O(n)
// Space Complexity = O(n)
int factorial(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    // n! = n*(n-1)!
    return n * factorial(n-1);
}

// 'a' works as accumulator here
// After the calling of functions no operation performed when returning, this is called tail recursion
// Once compiler recognizes tail recursion it optimizes code to be iterative so no call stack is needed.

int tailRecFactorial(int n,int a=1)
{
    if (n==0 || n==1)
    {
        return a;
    }
    return tailRecFactorial(n-1,n*a);
}

// Time Complexity = O(n)
// Space Complexity = O(1)
int iterFactorial(int n)
{
    int f = 1;
    for(int i=1;i<=n;i++)
    {
        f = f*i;
    }
    return f;
}

int main() {
    int n {0};
    cout << "Enter a number to calculate factorial ";
    cin >> n;
    cout << "\n** (Recursive) Factorial of " << n << " is " << factorial(n);
    cout << "\n** (Iterative) Factorial of " << n << " is " << iterFactorial(n) << "\n\n";
    return 0;
}