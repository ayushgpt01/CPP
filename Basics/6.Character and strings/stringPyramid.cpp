#include<iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string ";
    cin >> str;
    int n = str.size();
    // Pattern
    for(int i=1;i<=n;i++){
        int k,j;
        //first part of triangle
        for(j=0;j<n-i;j++){
            cout << " ";
        }
        for(k=0;k<i;k++){
            cout << str[k];
        }

        // second part of triangle
        k--;
        while(k){
            k--;
            cout << str[k];
        }
        while(j){
            j--;
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}