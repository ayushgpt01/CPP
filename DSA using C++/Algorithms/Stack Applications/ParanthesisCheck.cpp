#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
    string str;
    cout << "Enter an expression : ";
    cin >> str;
    stack<char> check;
    for (auto ch : str)
    {
        if(ch == '{' || ch == '[' || ch == '(')
            check.push(ch);
        else if(ch == '}' || ch == ']' || ch == ')')
        {
                check.pop();
        }
    }
    if(check.empty())
    {
        cout << "Valid Expression";
    } else {
        cout << "Invalid Expression";
    }
    return 0;
}