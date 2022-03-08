#include <iostream>
using namespace std;

int main()
{
    int arr1[5] = {1,2,3,4,5}; // C initializer syntax
    int arr2[5] {1,2,3,4,5}; // list initializer syntax
    int arr3[10] {5,6}; // first 2 initialized, rest are set to 0
    const int num = 30;
    int arr4[num] {0}; // size passed with a const variable
    int arr5[] {5,2,13,56,22,1,0};  // size automatically calculated

    cout << arr1[0] <<endl;
    cout << arr1[1] <<endl;
    cout << arr1[2] <<endl;
    cout << arr1[3] <<endl;
    cout << arr1[4] <<endl;

    arr3[3] = 10; // assignment

    return 0;
}