// Reverse an array
#include <iostream>
using namespace std;

void reverse(int a[], int n)
{
    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        swap(a[i], a[j]);
    }
}

void print(const int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the size : ";
    cin >> n;
    int arr[n];
    cout << "Enter the array (Seperated by spaces or newline): ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "\nOrignal array : ";
    print(arr, n);
    reverse(arr, n);
    cout << "\nReverse array : ";
    print(arr, n);
    return 0;
}