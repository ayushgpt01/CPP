#include <iostream>
using namespace std;

int partition(int arr[], int p, int n);
void quickSort(int arr[], int p, int n);
// Divide and conquer Algorithm
// Worst Case - O(n^2) (Sorted array)
// Best Case - O(nlogn)
// S(n) - O(n) bcoz of call stack
void quickSort(int arr[], int p, int n)
{
    if (p < n)  // atleast 1 element in array
    {
        int q = partition(arr, p, n); // q is the value that is already at its right place
        quickSort(arr, p, q - 1);     // sort the sub-array where values are <= q
        quickSort(arr, q + 1, n);     // sort the sub-array where values are >= q
    }
}

// T(n) - O(n) for partition function
int partition(int arr[], int p, int n)
{
    // arr [p...n] - Pivot is first element
    int i = p;
    int x = arr[p];
    for (int j = p + 1; j < n; j++)  // pivot+1 to last element
    {
        if (x >= arr[j])  // pivot is greater than element we are checking
        {
            i++;         // increase i and swap out ith and jth element
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i],arr[p]);  // swap pivot element to its correct position
    return i;  // return the correct position of pivot element 
}

void print(const int a[], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[10]{6, 7, 2, 3, 1, 9, 4, 8, 11, 0};
    int n = sizeof(arr) / sizeof(int);
    print(arr, n);
    quickSort(arr, 0, n);
    print(arr, n);
    return 0;
}