#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
   struct node*next;
};
struct node * head = NULL;
void createNode(int val)
{struct node * n = (struct node * )malloc(sizeof (struct node));
  if(head == NULL)
  {
    head = n;
    return;
  }
  n->data = val;

  n->next = head;
    head = n;
}
void display(struct node* head)
{
  struct node* temp = head;
  while(temp !=NULL)
  {
    printf("%d",temp->data);
   temp = temp ->next;
  }
}
int main()
{
  struct node * head = NULL;
  int n;
  scanf("%d",n);
  for(int i=0;i<n;i++)
  { int val;
  scanf("%d",val);
    createNode(val);

  }
  display(head);
  return 0;
}
