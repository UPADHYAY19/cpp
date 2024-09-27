#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
void inseratathead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    if (head != NULL)
    {
        head->prev = n;
    }
    head = n;
}
void insertation(node *&head, int val)
{
    if (head == NULL)
    {
        inseratathead(head, val);
        return;
    }

    node *temp = head;
    node *n = new node(val);
    while (temp->next != NULL)

    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    node *head = NULL;
    cout << "enter how many elements you want in your linkrd list" << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter the data in the linked list" << endl;
        int val;
        cin>>val;
        insertation(head, val);
    }

    display(head);

    return 0;
}