#include <iostream>
using namespace std;

int main() 
{
    int a = 10,*ipt = &a;
    float b = 10.7,*fpt = &b;
    char c = 'a',*cpt = &c;
    cout << "Pointer ipt address :" << ipt << " Value ipt address :" << *ipt << "\n";
    cout << "Pointer fpt address :" << fpt << " Value fpt address :" << *fpt << "\n";
    cout << "Pointer cpt address :" << cpt << " Value cpt address :" << *cpt << "\n";
    ipt++;
    cpt++;
    fpt++;
    cout << "After change Value is : " << endl;
    cout << "Pointer ipt address :" << ipt << " Value ipt address :" << *ipt << "\n";
    cout << "Pointer fpt address :" << fpt << " Value fpt address :" << *fpt << "\n";
    cout << "Pointer cpt address :" << cpt << " Value cpt address :" << *cpt << "\n";
    return 0;
}