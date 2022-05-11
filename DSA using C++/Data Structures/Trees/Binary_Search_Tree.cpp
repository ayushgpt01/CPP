#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;

    Node() : left(nullptr),right(nullptr){}
    Node(int x) : data(x),left(nullptr),right(nullptr){}
};

class BST
{
    Node* root;
    void insert(Node*,int);
    void search(Node*,int);
    void min(Node*);
    void max(Node*);
    void inorder(Node*);
    void preorder(Node*);
    void postorder(Node*);
public:
    BST() : root(nullptr){}

    void insert(int x){insert(root,x);}
    void search(int x){search(root,x);}
    void min(){min(root);}
    void max(){max(root);}
    void inorder(){inorder(root);cout <<endl;}
    void preorder(){preorder(root);cout << endl;}
    void postorder(){postorder(root);cout << endl;}
};

int main() {
    BST b;
    b.insert(16);
    b.insert(8);
    b.insert(24);
    b.insert(6);
    b.insert(12);
    b.insert(8);
    b.insert(28);
    b.insert(4);
    b.insert(6);
    b.insert(14);
    b.insert(26);
    b.insert(30);
    b.inorder();
    b.preorder();
    b.postorder();
    return 0;
}

// T(n) - O(depth of tree) => O(n) - worst; O(log n) - best
void BST::insert(Node* treeNode,int x)
{
    if(treeNode == nullptr)
    {
        treeNode = new Node(x);
        root = treeNode;
        cout << "Inserted " << x <<endl;
    }
    else
    {
        if(treeNode->data < x)
        {
            if(treeNode->right == nullptr)
            {
                Node* treetemp = new Node(x);
                treeNode->right = treetemp;
                cout << "Inserted " << x << endl; 
            }
            else
                insert(treeNode->right,x);

        }
        else
        {
            if(treeNode->left == nullptr)
            {
                Node* treetemp = new Node(x);
                treeNode->left = treetemp;
                cout << "Inserted " << x << endl;
            }
            else
                insert(treeNode->left,x);
        }
    }
}

void BST::search(Node* treeNode,int key)
{
    if(root == nullptr)
    {
        cout << "Tree is Empty." <<endl;
        return;
    }
    if(treeNode == nullptr)
    {
        cout << "Not Found " << key << endl;
        return;
    }
    if(treeNode->data == key)
    {
        cout << "Found " << key << endl;
        return;
    }
    if(key < treeNode->data)
    {
        search(treeNode->left,key);
        return;
    }
    else
    {
        search(treeNode->right,key);
        return;
    }
}

// T(n) - O(depth of tree) => O(n) - worst; O(log n) - best
void BST::min(Node* treeNode)
{
    if(root == nullptr)
    {
        cout << "Unable to get minimum element ,the tree is Empty." <<endl;
        return;
    }
    if(treeNode->left == nullptr)
    {
        cout << "Minimum element is " << treeNode->data << endl;
        return;
    }
    min(treeNode->left);
}

// T(n) - O(depth of tree) => O(n) - worst; O(log n) - best
void BST::max(Node* treeNode)
{
    if(root == nullptr)
    {
        cout << "Unable to get maximum element ,the tree is Empty." <<endl;
        return;
    }
    if(treeNode->right == nullptr)
    {
        cout << "Maximum element is " << treeNode->data << endl;
        return;
    }
    max(treeNode->right);
}

void BST::inorder(Node* treeNode)
{
    if(treeNode == nullptr)
        return;
    // Left Node, Root Node, Right Node
    inorder(treeNode->left);
    cout << treeNode->data << " ";
    inorder(treeNode->right);
}

void BST::preorder(Node* treeNode)
{
    // Root Node, Left Node, Right Node
    if(treeNode == nullptr)
        return;
    cout << treeNode->data << " ";
    preorder(treeNode->left);
    preorder(treeNode->right);
}

void BST::postorder(Node* treeNode)
{
    // Root Node, Left Node, Right Node
    if(treeNode == nullptr)
        return;
    postorder(treeNode->left);
    postorder(treeNode->right);
    cout << treeNode->data << " ";
}