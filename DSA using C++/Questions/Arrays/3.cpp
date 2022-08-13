// Find the 'kth' max and min element of the array
#include <iostream>
#include <queue>
using namespace std;

int kthSmallest(int arr[], int n, int k)
{
    priority_queue<int> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }
    for (int i = k; i < n; i++)
    {
        if (arr[i] < pq.top())
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    return pq.top();
}

int kthlargest(int arr[], int n, int k)
{
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
        pq.push(arr[i]);
    for (int i = 1; i < k; i++)
    {
        pq.pop();
    }
    return pq.top();
}

void print(const int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the size : ";
    cin >> n;
    int arr[n];
    cout << "Enter the array (Seperated by spaces or newline): ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int k;
    cout << "Enter k : ";
    cin >> k;
    cout << k << " smallest element is " << kthSmallest(arr, n, k) << endl;
    cout << k << " largest element is " << kthlargest(arr, n, k) << endl;
    return 0;
}