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

struct node * insertAtFirst(struct node * head, int data)
{
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->next= head;
    ptr->data= data;
    return ptr;
};
int main()
{
     struct node * head;
     struct node * second;
     struct node * third;

     head = (struct node *) malloc(sizeof(struct node));
     second = (struct node *) malloc(sizeof(struct node));
     third = (struct node *) malloc(sizeof(struct node));

     head->data = 7;
     head->next = second;

     second->data = 11;
     second->next = third;

     third->data = 66;
     third->next = NULL;

     linkedTraversal(head);
     head=insertAtFirst(head,56);
     linkedTraversal(head);

     return 0;
}
