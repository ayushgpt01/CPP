#include <iostream>
using namespace std;
// Radix Sort is an extension to Counting Sort
// T(n) - O(d*n)
void print(const int a[], int n);
void radixSort(int a[], int n);
void countingSort(int a[], int n, int k);
int getMax(int arr[], int n);

int main()
{
    int arr[]{170, 45, 75, 90, 802, 24, 2, 66};
    size_t n = sizeof(arr) / sizeof(int);
    print(arr, n);
    radixSort(arr, n);
    print(arr, n);
    return 0;
}

void print(const int a[], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int getMax(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}

void countingSort(int a[], int n, int k)
{
    int b[n];
    int c[10]{0};
    for (int i = 0; i < n; i++)
    {
        c[(a[i] / k) % 10]++;
    }
    for (int i = 1; i < 10; i++)
    {
        c[i] += c[i - 1];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        b[c[(a[i]/k)%10] - 1] = a[i];
        c[(a[i]/k)%10]--;
    }
     for (int i = 0; i < n; i++)
        a[i] = b[i];
}

void radixSort(int a[], int n)
{
    // Radix Sort works by applying count sort to each digit of the numbers of array
    int m = getMax(a, n);
    for (int i = 1; m / i > 0; i *= 10)
    {
        countingSort(a,n,i);
    }
}