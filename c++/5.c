#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void createNode(struct node**head, int val) {
    struct node* temp = *head;
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->data = val;
    n->next = NULL;

    if (*head == NULL) {
        *head = n;
        return;
    }

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = n;
}

void display(struct node* head) {
    struct node* temp = head;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main() {
    struct node* head = NULL;
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int val;
        
        scanf("%d", &val);
        createNode(&head, val);
    }

    display(head);

    return 0;
}
