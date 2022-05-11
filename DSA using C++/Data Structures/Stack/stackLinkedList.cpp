#include<iostream>
using namespace std;

// Stack Implementation using Linked List
class Node
{
public:
    int data;
    Node* next;
    Node() : next(nullptr){}
    Node(int x) : data(x),next(nullptr){}
};

class Stack
{
    Node* top;
public:
    Stack() : top(nullptr){}

    void push(int x);
    void pop();
    void peek();
    void isEmpty();
};

void Stack::push(int x)
{
    Node* newNode = new Node(x);
    newNode->next = top;
    top = newNode;
    cout << x << " pushed onto stack\n";
}

void Stack::pop()
{
    if(top == nullptr)
    {
        cout << "Stack UnderFlow\n";
        return;
    }
    Node* temp = top;
    top = top->next;
    cout << temp->data << " popped from stack\n";
    delete(temp);
}

void Stack::peek()
{
    if(top == nullptr)
    {
        cout << "Nothing at top. Stack is empty\n";
        return;
    }
    cout << top->data << " is at the top of the stack\n";
}

void Stack::isEmpty()
{
    if(top == nullptr)
    {
        cout << "Stack is empty\n";
        return;
    }
    cout <<"Stack is not empty\n";
}

int main() {
    Stack s;
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