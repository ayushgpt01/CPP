#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node() : next(nullptr){}
    Node(int x) : data(x),next(nullptr){}
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
    bool isEmpty();
    int remove();
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
int Queue::remove()
{
    if (head == nullptr)
    {
        cout << "Nothing to delete. Queue is empty\n";
        return;
    }
    Node *temp = head;
    int info = head->data;
    cout << "Deleted item " << info << endl;
    if(head->next == nullptr)
        head = nullptr;
    else
        head = head->next;
    delete (temp);
    return info;
}

bool Queue::isEmpty()
{
    if(head == nullptr)
        return true;
    return false;
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

void reverseQueue(Queue q)
{
    int i {0};
    if(!(q.isEmpty()))
    {
        i = q.remove();
        reverseQueue(q);
        q.insert(i);
    }
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