#include<iostream>
using namespace std;

int main() {
    int arr[] {20,40,60};
    int *ptr {arr};

    cout << "Value of arr " << arr << endl;
    cout << "Value of ptr " << ptr << endl;

    cout << "Array Subscript notation -- " <<endl;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;

    cout << "Pointer Subscript notation -- " <<endl;
    cout << ptr[0] << endl;
    cout << ptr[1] << endl;
    cout << ptr[2] << endl;

    cout << "Array Offset notation -- " <<endl;
    cout << *arr << endl;
    cout << *(arr+1) << endl;
    cout << *(arr+2) << endl;

    cout << "Pointer Offset notation -- " <<endl;
    cout << *ptr << endl;
    cout << *(ptr+1) << endl;
    cout << *(ptr+2) << endl;
    return 0;
}