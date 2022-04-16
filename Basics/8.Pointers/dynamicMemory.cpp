#include<iostream>
using namespace std;

int main() {
    int *ptr {nullptr};
    ptr = new int; // Memory allocated on heap with no var name
    cout << "Address allocated " << ptr <<endl;
    cout << "Value " << *ptr << endl; // Garbage
    *ptr = 100;
    cout << "Value " << *ptr << endl;
    delete ptr; // deallocate memory in heap

    // Allocate dynamic array
    size_t size {10};
    ptr = new int[size];
    cout << "Address allocated " << ptr <<endl;
    cout << "Value " << *ptr << endl; // Garbage
    *ptr = 80;
    cout << "Value " << *ptr << endl;
    delete [] ptr;
    return 0;
}