#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) : data(x),left(nullptr),right(nullptr){}
};

class BinaryTree
{
    Node* root;
    void insert(Node*,int);
    void inorder(Node*);
    void preorder(Node*);
    void postorder(Node*);
public:
    BinaryTree() : root(nullptr){}

    void insert(int x){insert(root,x);}
    void inorder(){inorder(root);cout << endl;}
    void preorder(){preorder(root);cout << endl;}
    void postorder(){postorder(root);cout << endl;}
};

int main() {
    BinaryTree bt;
    bt.insert(2);
    bt.insert(13);
    bt.insert(90);
    bt.insert(11);
    bt.insert(3);
    bt.inorder();
    bt.postorder();
    bt.preorder();
    return 0;
}

void BinaryTree::insert(Node* treeNode,int x)
{
    if(treeNode == nullptr)
    {
        treeNode = new Node(x);
        root = treeNode;
        return;
    }
    else 
    {
        Node* treetemp = new Node(x);
        if(treeNode->left == nullptr)
        {
            treeNode->left = treetemp;
            return;
        }
        else if(treeNode->right == nullptr)
        {
            treeNode->right = treetemp;
            return;
        }
        else 
        {
            insert(treeNode->left,x);
        }
    }
}

void BinaryTree::inorder(Node* treeNode)
{
    if(treeNode == nullptr)
        return;
    // Left Node, Root Node, Right Node
    inorder(treeNode->left);
    cout << treeNode->data << " ";
    inorder(treeNode->right);
}

void BinaryTree::preorder(Node* treeNode)
{
    // Root Node, Left Node, Right Node
    if(treeNode == nullptr)
        return;
    cout << treeNode->data << " ";
    preorder(treeNode->left);
    preorder(treeNode->right);
}

void BinaryTree::postorder(Node* treeNode)
{
    // Root Node, Left Node, Right Node
    if(treeNode == nullptr)
        return;
    postorder(treeNode->left);
    postorder(treeNode->right);
    cout << treeNode->data << " ";
}