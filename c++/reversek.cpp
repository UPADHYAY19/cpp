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
node *reverse(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node* newhead = reverse(head->next);

    head->next->next = head;
    head->next = NULL;
    return newhead;
}
node *reversek(node *&head,int k)
{
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr ;
    int count =0;
    while(currptr!=NULL && count<k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if(nextptr!=NULL)
    {
        head->next = reversek(nextptr,k);
    }
    return prevptr;
}

int main()
{
    node *head = NULL;
    cout<<"enter how many node of want in your list"<<endl;
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
    int k=2;
    cout<<"list after reversing the kth node"<<endl;
    node* newhead = reversek(head,k);
    print(newhead);

    return 0;
}