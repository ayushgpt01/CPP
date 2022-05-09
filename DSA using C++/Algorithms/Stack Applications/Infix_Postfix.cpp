#include<iostream>
#include<string>
#include<stack>
using namespace std;

int getPriority(char c)
{
    if(c == '(')
        return 0;
    else if(c == '*' || c == '/')
        return 1;
    else if(c == '+' || c == '-')
        return 2;
}

int main() {
    string exp;
    stack<char> post;
    cout << "Enter an airthmetic infix expression : ";
    cin >> exp;
    for(auto ch : exp)
    {
        if(ch == '(')
            post.push(ch);
        else if (isalnum(ch))
            cout << ch;
        else if (ch == ')')
        {
            char x = post.top();
            while(x!='(')
            {
                cout << post.top();
                post.pop();
            }
        }
        else 
        {
            while(getPriority(ch) <= getPriority(post.top()))
            {
                cout << post.top();
                post.pop();
            }
            post.push(ch);
        }
    }
    return 0;
}