#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
void linkedTraversal(struct node* ptr) {
    while (ptr != NULL) {
        printf("element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main() {
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *) malloc(sizeof(struct node));
    second = (struct node *) malloc(sizeof(struct node));
    third = (struct node *) malloc(sizeof(struct node));

    printf("Enter the data for the first node: ");
    scanf("%d", &head->data);
    head->next = second;

    printf("Enter the data for the second node: ");
    scanf("%d", &second->data);
    second->next = third;

    printf("Enter the data for the third node: ");
    scanf("%d", &third->data);
    third->next = NULL;

    linkedTraversal(head);

    return 0;
}

