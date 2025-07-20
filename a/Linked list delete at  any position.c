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

struct node * deleteAnyValue(struct node * head, int value)
{
    struct node * p = head;
    struct node * q=head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data == value)
    {
      p->next=q->next;
    free(q);
    }
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

     int value;
     printf("enter the value want to delete: ");
     scanf("%d",&value);

     printf("Linked list before deletion\n");
     linkedTraversal(head);

     head = deleteAnyValue(head,value);
     printf("Linked list after deletion\n");
     linkedTraversal(head);

     return 0;
}



