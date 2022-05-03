#include<iostream>
using namespace std;

// Merge Sort is a Divide and Conquer Sorting Algorithm where we divide array into sub arrays until each sub array is of size 1 then merge them into one array while sorting them.
// This is an external sort algorithm (Sorting algo which can sort data size higher than available RAM by utilizing Disk space).
// Merge Sort Time Complexity - O(n logn)
void mergeSort(int arr[],int p,int r);
// Merge Function takes O(n) Time
void merge(int arr[],int p,int q,int r);
void print(const int a[],int n);

int main()
{
    int arr[8]{6, 7, 2, 3, 1, 9, 4, 8};
    int n = sizeof(arr) / sizeof(int);
    print(arr, n);
    mergeSort(arr, 0, 7);
    print(arr, n);
    return 0;
}

void mergeSort(int arr[],int p,int r)
{
    // Recursively break the array into parts until p=r (1 element left in array)
    if(p < r)
    {
        int q = (p+r)/2;
        mergeSort(arr,p,q);
        mergeSort(arr,q+1,r);
        merge(arr,p,q,r);
    }
}

void merge(int arr[],int p,int q,int r)
{
    // Size of two arrays
    int n1 = q-p+1;
    int n2 = r-q;
    int i = 0,j = 0;
    // Create two new arrays of sub array sizes
    int arr1[n1];
    int arr2[n2];
    // Put all elemnts from array into sub array
    for(i=0;i<n1;i++){
        arr1[i] = arr[p+i];
    }
    for(i=0;i<n2;i++){
        arr2[i] = arr[q+i+1];
    }
    i = 0;
    int k=p;
    // Merge both sub arrays into orignal array
    while(i < n1 && j < n2)
    {
        // Compare the values of sub arrays and put smaller one inside the orignal array
        if(arr1[i]<=arr2[j])
        {
            arr[k] = arr1[i];
            i++;
        } else 
        {
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }
    // Put the remaining values in sub arrays into orignal array if any left
    while (i < n1){
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n2){
        arr[k] = arr2[j];
        j++;
        k++;
    }
}

void print(const int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}