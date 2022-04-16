#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int *iptr;             // garbage value pointer
    double *dptr{nullptr}; // null pointer - no garbage value (added in c++11)
    char *cptr;
    int num {20};

    cout << "Address of num " << num << " is " << &num << endl;
    cout << "Value of iptr before assigning nullptr - " << iptr << endl;
    iptr = nullptr;
    cout << "Value of iptr after assigning nullptr - " << iptr << endl;
    iptr = &num;
    cout << "Value of iptr after assigning num - " << iptr << " " << *iptr << endl; // *iptr is called pointer derefrencing


    int *p1 {nullptr};
    double *p2 {nullptr};
    char *p3 {nullptr};
    string *p4 {nullptr};
    vector<int> *p5 {nullptr};

    cout << "Size of p1 : "<<sizeof(p1) <<endl;
    cout << "Size of p2 : "<<sizeof(p2) <<endl;
    cout << "Size of p3 : "<<sizeof(p3) <<endl;
    cout << "Size of p4 : "<<sizeof(p4) <<endl;
    cout << "Size of p5 : "<<sizeof(p5) <<endl;

    return 0;
}