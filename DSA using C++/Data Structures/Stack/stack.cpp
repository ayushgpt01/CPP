#include<iostream>
using namespace std;

class stack
{
    int top;
public:
    int a[10];

    stack()
    {
        top = -1;
    }

    void push(int x);
    void pop();
    void peek();
    void isEmpty();
};

// O(1)
void stack::push(int x)
{
    if(top >= 9)
    {
        cout << "Stack Overflow (Stack is full) \n";
        return;
    }
    a[++top] = x;
    cout << "Pushed " << x << " onto stack.\n";
}

// O(1)
void stack::pop()
{
    if(top < 0)
    {
        cout << "Stack Underflow (Stack is empty)\n";
        return;
    }
    top--;
    cout << a[top+1] << " Deleted\n";
}

// O(1)
void stack::peek()
{
    if(top<0)
    {
        cout << "Nothing in top of the Stack\n";
        return;
    }
    cout << "Top of the stack is " << a[top] << endl;
}


// O(1)
void stack::isEmpty()
{
    if(top<0)
    {
        cout << "Stack is empty\n";
        return;
    }
    cout << "Stack is not empty\n";
    return;
}

int main() {
    stack s;
    s.push(25);
    s.pop();
    s.pop();
    s.isEmpty();
    s.peek();
    s.push(45);
    s.push(46);
    s.peek();
    s.pop();
    s.pop();
    return 0;
}