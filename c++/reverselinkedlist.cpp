#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void createnode(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = NULL;
}
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "null" << endl;
}

node *reverse(node *&head)
{
    node *prevptr = NULL;
    node *next;
    node *current = head;
    while (current != NULL)
    {
        next = current->next;
        current->next = prevptr;
        prevptr = current;
        current = next;
    }
    return prevptr;
}
int main()
{
    node *head = NULL;
    cout << "enter how many node of want in your list" << endl;
    int n;
    cin >> n;
    int val;

    for (int i = 0; i < n; i++)
    {
        cout << "enter the data" << endl;
        cin >> val;
        createnode(head, val);
    }
    print(head);
    cout << "linked list after reverse " << endl;
    node *newhead = reverse(head);
    print(newhead);
    return 0;
}