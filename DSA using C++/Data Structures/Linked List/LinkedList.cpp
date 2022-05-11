#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Default constructor for node
    Node() : data(0),next(nullptr){}
    // Parameterized Constructor for node
    Node(int x) : data(x),next(nullptr){}
};

class LinkedList
{
    // Head pointer
    Node *head;

public:
    // Constructor to initialize head pointer to null as soon as new list is created
    LinkedList(): head(nullptr){}
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
    // Create a new Node
    Node *newNode = new Node(x);
    // Update the new Node to point to first node of list
    newNode->next = head;
    // update head pointer to point to new Node created
    head = newNode;
}

// T(n) - O(n)
void LinkedList::insertEnd(int x)
{
    // Create a new node and assign it memory
    Node *newNode = new Node(x);
    // check if the list is empty
    if (head == nullptr)
    {
        // assign head pointer first element and return
        head = newNode;
        return;
    }
    // create a temporary node to transverse the list
    Node *temp = head;
    // transverse until we find the pointer value to be null
    while (temp->next != nullptr)
    {
        // update the temp value with next pointer to the next node
        temp = temp->next;
    }
    // Connect the newly created node with the last node of the list
    temp->next = newNode;
}

// T(n) - O(n)
void LinkedList::insertAfter(int x, int y)
{
    // create a new node
    Node *newNode = new Node(x);
    Node *temp = head;
    // loop to find the element y in list
    while (temp != nullptr)
    {
        if (temp->data = y)
        {
            // once found we insert the new node after node with y
            newNode->next = temp->next;
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
    // if inserting at first position in list
    if (i == 1)
    {
        Node *newNode = new Node(x);
        newNode->next = head;
        head = newNode;
        return;
    }
    Node *temp = head;
    // iterate to position where we need to insert data
    for (int j = 2; j < i; j++)
    {
        if (temp == nullptr)
        {
            cout << "List too short\n";
            return;
        }
        temp = temp->next;
    }
    // insert the node
    Node *newNode = new Node(x);
    newNode->next = temp->next;
    temp->next = newNode;
}

// T(n) - O(n)
void LinkedList::deleteNode(int x)
{
    Node *p;
    // Delete the first item
    if (head->data == x)
    {
        p = head;
        head = head->next;
        delete (p);
        cout << "Item deleted\n";
        return;
    }
    Node *temp = head;
    // loop to iterate to item x and delete item
    while (temp->next != nullptr)
    {
        if (temp->next->data = x)
        {
            p = temp->next;
            temp->next = temp->next->next;
            delete (p);
            cout << "Item deleted\n";
            return;
        }
        temp = temp->next;
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
    return 0;
}