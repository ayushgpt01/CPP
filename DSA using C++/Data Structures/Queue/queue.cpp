#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = nullptr;
    }
    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};

class Queue
{
    Node *head;
    Node *tail;

public:
    Queue()
    {
        head = nullptr;
        tail = nullptr;
    }

    void insert(int x);
    void remove();
    void print();
};

// O(1) - enqueue
void Queue::insert(int x)
{
    Node *newNode = new Node(x);
    if (tail == nullptr)
    {
        tail = newNode;
        head = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

// O(1) - dequeue
void Queue::remove()
{
    if (head == nullptr)
    {
        cout << "Nothing to delete. Queue is empty\n";
        return;
    }
    Node *temp = head;
    cout << "Deleted item " << head->data << endl;
    if(head->next == nullptr)
        head = nullptr;
    else
        head = head->next;
    delete (temp);
}

void Queue::print()
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Queue q;
    q.insert(2);
    q.insert(7);
    q.insert(3);
    q.print();
    q.remove();
    q.print();
    q.remove();
    q.remove();
    q.remove();
    return 0;
}