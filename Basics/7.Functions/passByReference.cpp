#include<iostream>
#include<vector>
using namespace std;

void swap(int &a, int &b) {
    int temp {a};
    a = b;
    b = temp;
}

void printVector(const vector<int> &v) {
    for(int x : v){
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    // Pass by reference for integers
    int x {10} , y {20};
    cout << "x : " << x << " ,y: " << y << endl;
    swap(x,y);
    cout << "x : " << x << " ,y: " << y << endl;

    // pass by reference for vector
    vector<int> v {20,13,44,2,567,23};
    printVector(v);
    return 0;
}