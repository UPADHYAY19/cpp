#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void display(node* root) {
    if (root == NULL) {
        return;
    }
    display(root->left);
    cout << root->data << "->";
    display(root->right);
}

int main() {
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    display(root);
    cout << "NULL" << endl;

    return 0;
}
