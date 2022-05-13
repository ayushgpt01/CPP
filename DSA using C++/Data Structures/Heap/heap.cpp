#include<iostream>
using namespace std;

class maxheap
{
    int *arr;
    int capacity;
    int curr_size;
public:
    maxheap(int n)
    {
        capacity = n;
        curr_size = 0;
        arr = new int[capacity];
    }

    int parent(int i){return (i-1)/2;}
    int left(int i){return ((2*i)+1);}  // for array starting with 1 = 2i
    int right(int i){return (2*i + 2);}  // arr[1..n]  = 2i + 1
    void heapify(int);
    void insert(int);
    void removeIndex(int);
    int removeMax();
    void print();
};

int main() {
    maxheap h(15);
    h.insert(20);
    h.insert(2);
    h.insert(7);
    h.insert(33);
    h.insert(1);
    h.print();
    return 0;
}

void maxheap::print()
{
    for(int i=0;i<curr_size;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void maxheap::insert(int data)
{
    if(curr_size == capacity)
    {
        cout << "Heap is full. Cannot insert\n";
        return;
    }
    // Insert the data at the last place in array
    int i = curr_size;
    curr_size++;
    arr[i] = data;
    int par = parent(i);
    // Loop to check from current inserted node to root if it satisfies max heap property or not
    while(i!=0 && arr[par] < arr[i])
    {
        swap(arr[par],arr[i]);
        i = par;
        par = parent(i);
    }
}

void maxheap::removeIndex(int i)
{
    arr[i] = INT_MAX;
    int par = parent(i);
    while(i!=0 && arr[par] < arr[i])
    {
        swap(arr[par],arr[i]);
        i = par;
        par = parent(i);
    }
    heapify(0);
}

int maxheap::removeMax()
{
    if(curr_size <= 0)
        return INT_MIN;
    if(curr_size == 1)
    {
        curr_size--;
        return arr[0];
    }
    int root = arr[0];
    arr[0] = arr[curr_size-1];
    heapify(0);
    return root;
}

void maxheap::heapify(int i)
{
    int l = left(i);
    int r = right(i);
    int largest {i};
    if (l <= capacity && arr[l] > arr[i])
        largest = l;
    if (r <= capacity && arr[r] > arr[i])
        largest = r;
    if(largest != i)
    {
        swap(arr[i],arr[largest]);
        heapify(largest);
    }
}