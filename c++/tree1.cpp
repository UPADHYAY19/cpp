#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
void PreOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data;
    PreOrder(root->left);
    PreOrder(root->right);
}
void InOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    InOrder(root->left);
    cout << root->data;
    InOrder(root->right);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(1);
    cout << "tree in inorder travalsal" << endl;
    PreOrder(root);
    cout<<endl;
    cout << "tree in inorder travalsal" << endl;
    InOrder(root);
}