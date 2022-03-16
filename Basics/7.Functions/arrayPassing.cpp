#include <iostream>
using namespace std;

void print(const int[], int);

int main()
{
    int arr[] = {12, 4, 7, 8, 3, 2, 56, 23, 14, 67, 72, 3, 1};
    int n = sizeof(arr) / sizeof(n);
    print(arr, n);
}

void print(const int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}