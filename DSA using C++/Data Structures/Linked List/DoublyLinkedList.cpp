#include <iostream>
using namespace std;

class Node
{
public:
    // Two pointers, one for next node and one for previous node
    int data;
    Node* next;
    Node* prev;

    Node()
    {
        data = 0;
        next = nullptr;
        prev = nullptr;
    }
    Node(int x)
    {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};

class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }
    void insertBegin(int);
    void insertEnd(int);
    void insertAfter(int, int);
    void printList();
    void deleteNode(int);
    void insertAt(int x, int i);
};

// T(n) - O(1)
void LinkedList::insertBegin(int x)
{
    Node *newNode = new Node(x);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

// T(n) - O(n)
void LinkedList::insertEnd(int x)
{
    Node *newNode = new Node(x);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    newNode->prev = temp;
    temp->next = newNode;
}

// T(n) - O(n)
void LinkedList::insertAfter(int x, int y)
{
    Node *newNode = new Node(x);
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data = y)
        {
            temp->next->prev = newNode;
            newNode->next = temp->next;
            newNode->prev = temp;
            temp->next = newNode;
            return;
        }
        temp = temp->next;
    }
    cout << y << " not found in the list \n";
}

// T(n) - O(i)
void LinkedList::insertAt(int x, int i)
{
    if (i == 1)
    {
        Node *newNode = new Node(x);
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
        return;
    }
    Node *temp = head;
    for (int j = 2; j < i; j++)
    {
        if (temp == nullptr)
        {
            cout << "List too short\n";
            return;
        }
        temp = temp->next;
    }
    Node *newNode = new Node(x);
    temp->next->prev = newNode;
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
}

// T(n) - O(n)
void LinkedList::deleteNode(int x)
{
    // No items in list
    if(head == nullptr)
    {
        cout << "List is Empty\n";
        return;
    }
    Node *p;
    // Only one item in list
    if(head->next == nullptr)
    {
        if (head->data == x)
        {
            p = head;
            head = head->next;
            head->prev = nullptr;
            delete (p);
            cout << "Item deleted\n";
            return;
        }
        else {
            cout << "Element not in the list\n";
            return;
        }   
    }
    // First item
    if (head->data == x)
    {
        p = head;
        head = head->next;
        head->prev = nullptr;
        delete (p);
        cout << "Item deleted\n";
        return;
    }
    // Item inbetween
    Node *temp = head->next;
    while (temp->next != nullptr)
    {
        if (temp->data == x)
        {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete (temp);
            cout << "Item deleted\n";
            return;
        }
        temp = temp->next;
    }
    // Last item
    if(temp->data == x)
    {
        temp->prev->next = nullptr;
        delete(temp);
        cout << "Item deleted\n";
    }
}

// T(n) - O(n)
void LinkedList::printList()
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
    LinkedList list;
    list.insertBegin(5);
    list.printList();
    list.insertEnd(15);
    list.printList();
    list.insertAt(65, 2);
    list.printList();
    list.insertAt(63, 1);
    list.printList();
    list.insertBegin(19);
    list.printList();
    list.insertAfter(14, 19);
    list.printList();
    list.insertAt(18, 4);
    list.printList();
    list.deleteNode(19);
    list.printList();
    list.deleteNode(15);
    list.printList();
    list.deleteNode(65);
    list.printList();
    return 0;
}