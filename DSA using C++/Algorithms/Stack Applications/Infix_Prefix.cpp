#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

int getPriority(char c)
{
    if(c == '(')
        return 0;
    else if(c == '*' || c == '/')
        return 1;
    else if(c == '+' || c == '-')
        return 2;
    return -1;
}

string postfix(string exp)
{
    stack<char> post;
    string post_exp;
    for(auto ch : exp)
    {
        if(ch == '(')
            post.push(ch);
        else if (isalnum(ch))
            post_exp.push_back(ch);
        else if (ch == ')')
        {
            char x = post.top();
            while(x!='(')
            {
                post_exp.push_back(post.top());
                post.pop();
            }
        }
        else 
        {
            while(getPriority(ch) <= getPriority(post.top()))
            {
                post_exp.push_back(post.top());
                post.pop();
            }
            post.push(ch);
        }
    }
    return post_exp;
}

int main() {
    string exp;
    cout << "Enter an infix expression : ";
    cin >> exp;
    reverse(exp.begin(),exp.end());
    cout << exp << endl;
    string output = postfix(exp);
    cout << output << endl;
    reverse(output.begin(),output.end());
    cout << output << endl;
    return 0;
}