#include<iostream>
using namespace std;

void heapify(int arr[],int n,int i)
{
    int l = (2*i)+1;
    int r = (2*i)+2;
    int largest {i};
    if (l < n && arr[l] > arr[largest])
        largest = l;
    if (r < n && arr[r] > arr[largest])
        largest = r;
    if(largest != i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

void buildHeap(int arr[],int n)
{
    for(int i=(n-1)/2;i>=0;i--)
        heapify(arr,n,i);
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] {3,5,1,7,8,4,2,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    buildHeap(arr,n);
    print(arr,n);
    return 0;
}