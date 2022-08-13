// Find the Maximum and Minimum element in the array
#include <iostream>
using namespace std;

int max(const int a[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    return max;
}

int min(const int a[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
    }
    return min;
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
    cout << "Maximum number in the array is " << max(arr, n) << "\n";
    cout << "Minimum number in the array is " << min(arr, n) << "\n";
    return 0;
}