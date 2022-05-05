#include<iostream>
using namespace std;

// Time Complexity - O(n^2)
// Swaps - O(n)
void selectionSort(int arr[],int n);

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
    selectionSort(arr, n);
    print(arr, n);
    return 0;
}

void selectionSort(int arr[],int n)
{
    int smallest {0};
    for(int i=0;i<n-1;i++)  // can do <n-1 as last element will aleady be sorted so no need to check for n-1 element
    {
        smallest = i;  // assume ith is the smallest element
        for(int j=i+1;j<n;j++)
        {
            if(arr[smallest]>arr[j])  // check with all i+1 elements if any are smaller than current smallest
            {
                smallest = j;  // update the smallest element
            }
        }
        if(smallest!=i)  // if smallest changed only then swap (little optimization)
        {
            swap(arr[i],arr[smallest]); // swap the smallest element found to its correct position from the start of array.
        }
    }
}