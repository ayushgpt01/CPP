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

void heapSort(int arr[],int n)
{
    // Build a heap
    for(int i=(n/2)-1;i>=0;i--)
        heapify(arr,n,i);
    // swap largest with last element and reduce size of array until no other element in array
    while(n>=0)
    {
        swap(arr[0],arr[n-1]);
        n--;
        heapify(arr,n,0);
    }   
}

void print(const int v[],int n)
{
    for(int val = 0;val < n;val++)
    {
        cout << v[val] << " ";
    }
     cout << endl;
}

int main() {
    int arr[] {9,5,8,1,4,55,32,90,71};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    heapSort(arr,n);
    print(arr,n);
    return 0;
}