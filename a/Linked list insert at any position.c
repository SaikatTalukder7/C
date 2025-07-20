#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = NULL, * temp, * newNode;
    int position, data, i;

    // Initially, the list is empty
    head = NULL;

    // Prompt user for the number of nodes to insert
    int n;
    printf("Enter the number of initial nodes: ");
    scanf("%d", &n);

    // Insert initial nodes into the list
    for (int j = 0; j < n; j++) {
        printf("Enter data for node %d: ", j + 1);
        scanf("%d", &data);

        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;  // First node becomes the head
        } else {
            temp = head;
            while (temp->next != NULL) temp = temp->next;
            temp->next = newNode;  // Insert at the end
        }
    }

    // Print the initial list
    printf("\nInitial List: ");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    // Ask user for position and value to insert
    printf("\nEnter position to insert (0 for beginning): ");
    scanf("%d", &position);
    printf("Enter value to insert: ");
    scanf("%d", &data);

    // Create new node
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (position == 0) {
        // Insert at the beginning
        newNode->next = head;
        head = newNode;
    } else {
        // Insert at the specified position
        temp = head;
        for (i = 0; i < position - 1 && temp != NULL; i++) temp = temp->next;

        if (temp == NULL) {
            printf("Invalid position\n");
        } else {
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    // Print updated list
    printf("\nUpdated List: ");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}
