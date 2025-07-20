#include<stdio.h>
#include<stdlib.h>

struct node{
     int data;
     struct node *next;
     };

void linkedTraversal(struct node* ptr){
    while(ptr != NULL)
    {
     printf("element: %d\n", ptr->data);
     ptr=ptr->next;
    }
}

struct node * deleteAtEnd(struct node * head)
{
    struct node * p = head;
    struct node * q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next =NULL;
    free(q);
    return head;
};
int main()
{
     struct node * head;
     struct node * second;
     struct node * third;

     head = (struct node *) malloc(sizeof(struct node));
     second = (struct node *) malloc(sizeof(struct node));
     third = (struct node *) malloc(sizeof(struct node));

     printf("Enter data for first node: ");
     scanf("%d", &head->data);
     head->next = second;

     printf("Enter data for second node: ");
     scanf("%d", &second->data);
     second->next = third;

     printf("Enter data for third node: ");
     scanf("%d", &third->data);
     third->next = NULL;

     printf("Linked list before deletion\n");
     linkedTraversal(head);

     head = deleteAtEnd(head);
     printf("Linked list after deletion\n");
     linkedTraversal(head);

     return 0;
}


