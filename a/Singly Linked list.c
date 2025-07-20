#include<stdio.h>
int main()
{
     struct node{
     int data;
     struct node *next;
     };
  struct node *head=NULL, *newnode, *temp;
  head=0;
  int input;
  printf("If you want to create linked list then type 1: ");
  scanf("%d", &input);
 while(input)
 {
     newnode=(struct node*)malloc(sizeof(struct node));
     printf("Enter a data: ");
     scanf("%d", &newnode->data);
     newnode->next=NULL;
   if(head==NULL)
   {
       head=temp=newnode;
   }
   else
   {
       temp->next=newnode;
       temp=newnode;
   }
   printf("Do you want to continue 0/1: ");
   scanf("%d", &input);
 }
 temp=head;
 while(temp!=NULL)
 {
     printf("%d->", temp->data);
     temp=temp->next;
 }
 printf("NULL\n");
 return 0;
}

