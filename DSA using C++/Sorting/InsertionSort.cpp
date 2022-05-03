#include <iostream>
using namespace std;

// Insertion Sort is an in-place, online and stable sorting algorithm which inserts the key in the presorted array at the right place.
// In-Place refers to no additional memory allocated during sorting
// Stable algorithm is that which repeated element appears in the same order as input.
// Online Sorting algorithm refers to data being given over time or all the data is not available at the start of the program.

// Time-Complexity - O(n^2)

void insertSort(int a[], int n)
{
    int key, i;
    for (i = 1; i < n; i++)
    {
        key = a[i]; // Save the element to be checked and swapped into key
        int j = i - 1;
        while (j >= 0 and key < a[j]) // check if the key is smaller than previous element and dont let j less than 0
        {
            a[j + 1] = a[j]; // replace the element currently checking with previous one as it's bigger than key
            j--;
        }
        a[j + 1] = key; // all elements shifted to make space for key. Place key at its position
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

int main()
{
    int arr[10]{6, 7, 2, 3, 1, 9, 4, 8, 11, 0};
    int n = sizeof(arr) / sizeof(int);
    print(arr, n);
    insertSort(arr, n);
    print(arr, n);
    return 0;
}