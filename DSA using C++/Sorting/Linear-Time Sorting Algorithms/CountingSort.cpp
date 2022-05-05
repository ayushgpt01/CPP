#include<iostream>
using namespace std;
// Counting Sort is a stable sorting algorithm
// T(n) - O(n+k)
void print(const int a[],int n);
void countingSort(int a[],int b[],int n,int k);

int main()
{
    int arr[10]{6, 7, 2, 3, 1, 9, 4, 8, 11, 0};
    size_t n = sizeof(arr) / sizeof(int);
    print(arr, n);
    int b[n] {0}; 
    countingSort(arr, b, n ,11);
    print(b, n);
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

void countingSort(int a[],int b[],int n,int k)
{
    // array b is the output array of size n
    // array c is the auxilary array of size k(k is the range of numbers in array from 0 to k)
    int c[k+1] {0}; // initialize array c to 0
    for(int i=0;i<n;i++)  // count the frequency of each value of array a
    {
        c[a[i]]++;
    }
    for(int i=1;i<=k;i++)  // count the cumulative sum to find out the num of elements less than i i.e, i <= c[i]
    {
        c[i] = c[i-1] + c[i];
    }
    // Build the output array
    for(int i=n-1;i>=0;i--)  
    {
        b[c[a[i]]-1] = a[i];  // Place elements at their right position leaving enough space ahead of them for elements less than them 
        c[a[i]]--; // decrease the count so that the element placed is reflected in array c
    }
}