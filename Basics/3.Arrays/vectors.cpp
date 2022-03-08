#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Vector is a Dynamic Array
    vector<int> a (20);
    vector<char> emptyVector;
    vector<char> vowels {'a','e','i','o','u'};
    vector<double> hoursperday (365,24);

    cout << "value at index 0 is " << hoursperday[0]<<endl;
    cout << "value at index 1 is " << hoursperday.at(1)<<endl;
    vowels.push_back('z');
    cout << vowels[vowels.size()-1] << endl;
    vowels.pop_back();
    cout << vowels[vowels.size()-1] << endl;

    return 0;
}