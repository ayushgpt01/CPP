#include<iostream>
using namespace std;

// T(n) - O(n)
int linearSearch(int arr[],int size,int data)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i] == data)
            return i;
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
    int arr[10]{6, 7, 2, 3, 1, 9, 4, 8, 11, 0};
    size_t n = sizeof(arr) / sizeof(int);
    print(arr, n);
    cout << "9 is at the position " << linearSearch(arr, n,9) + 1;
    return 0;
}