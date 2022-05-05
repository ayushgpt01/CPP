#include<iostream>
using namespace std;

// Worst Case Time Complexity - O(n^2) , O(n^2) swaps
// Best Case Time Complexity - O(n) , O(1) swaps
// Average Case Time Complexity - O(n^2) , O(n^2) swaps
void bubbleSort(int arr[],size_t n)
{
    int unsortedElement = n;
    bool swapped {false};
    do
    {
        swapped = false;
        for(int i=0;i<unsortedElement-1;i++)
        {
            if(arr[i] > arr[i+1])
            {
                swap(arr[i],arr[i+1]);
                swapped = true;
            }
        }
        unsortedElement--;
    } while (swapped);
}

void print(const int a[], size_t n)
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
    size_t n = sizeof(arr) / sizeof(int);
    print(arr, n);
    bubbleSort(arr, n);
    print(arr, n);
    return 0;
}