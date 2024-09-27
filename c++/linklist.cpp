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
void inserattail(node *&head, int val)
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


int main()
{
    node *head = NULL;
    int n;
    cin>>n;
    int val;
    
    for(int i=0;i<n;i++)
    {
        cout<<"enter the data"<<endl;
    cin>>val;
         inserattail(head, val);

    }
    
    print(head);
    

    return 0;
}