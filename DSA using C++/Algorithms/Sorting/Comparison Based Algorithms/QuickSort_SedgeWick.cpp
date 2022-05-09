#include <iostream>
using namespace std;

// Modified QuickSort Algorithm by Sedwgick
// Objective was to reduce the space complexity of O(n) to a lesser one

int partition(int arr[], int p, int n);
void quickSort(int arr[], int p, int n);

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

void quickSort(int arr[], int p, int n)
{
    while (p < n) 
    {
        int q = partition(arr, p, n);
        if(q-p < n-q)
        {
            quickSort(arr, p, q - 1);    
            p = q+1;
        }
        else
        {
            quickSort(arr, q + 1, n);    
            n = q-1;
        }
    }
}

// T(n) - O(n) for partition function
int partition(int arr[], int p, int n)
{
    int i = p;
    int x = arr[p];
    for (int j = p + 1; j < n; j++) 
    {
        if (x >= arr[j]) 
        {
            i++; 
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i],arr[p]);
    return i;
}