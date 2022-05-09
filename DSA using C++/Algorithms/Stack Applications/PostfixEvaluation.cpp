#include <iostream>
#include <string>
#include <stack>
using namespace std;

int evaluate(string exp)
{
    stack<int> st;
    int eval;
    for (auto chi : exp)
    {
        if (isalnum(chi))
        {
            st.push(chi-48);
        }
        else
        {
            int x = st.top();
            st.pop();
            int y = st.top();
            st.pop();
            switch (chi)
            {
            case '+':
                st.push(x + y);
                break;
            case '-':
                st.push(x - y);
                break;
            case '*':
                st.push(x * y);
                break;
            case '/':
                st.push(x / y);
                break;
            default:
                cout << "Wrong Expression";
                return -1;
            }
        }
    }
    eval = st.top();
    return eval;
}

int main()
{
    string exp;
    cout << "Enter an airthmetic infix expression : ";
    cin >> exp;
    cout << evaluate(exp);
    return 0;
}