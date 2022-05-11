#include<iostream>
using namespace std;

// T(n) - O(log n)
int binarySearch(int arr[], int size, int data)
{
    // Needs a sorted array
    int mid = size/2;
    int p {0} , r {size-1};
    while(p <= r)
    {
        if(arr[mid] == data)
            return mid;
        else if (arr[mid] < data)
        {
            p = mid+1;
        }
        else 
        {
            r = mid-1;
        }
        mid = (p+r)/2;
    }
    return -1;
}

void print(const int a[], size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10]{0,1,2,3,4,5,6,7,8,9};
    size_t n = sizeof(arr) / sizeof(int);
    print(arr, n);
    cout << "9 is at the position " << binarySearch(arr, n, 9) + 1;
    return 0;
}