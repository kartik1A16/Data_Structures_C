#include <stdio.h> 
#include <stdlib.h> 
struct Node { 
    int data; 
    struct Node *prev, *next; 
}; 
void display(struct Node *head) 
{ 
    struct Node *temp = head;
    while (temp != NULL) { 
        printf("%d <-> ", temp->data); 
        temp = temp->next; } 
        printf("NULL\n"); 
    } 
    int main() { 
        struct Node *head = NULL, *temp, *newNode; 
        int n, data; 
        printf("Enter number of nodes: "); 
        scanf("%d", &n); 
        for (int i = 0; i < n; i++) { 
            newNode = (struct Node*)malloc(sizeof(struct Node)); 
            printf("Enter data for node %d: ", i + 1); 
            scanf("%d", &data); 
            newNode->data = data; 
            newNode->next = newNode->prev = NULL; 
            if (head == NULL) head = temp = newNode; 
            else { 
                temp->next = newNode; newNode->prev = temp; 
                temp = newNode; 
            } 
        } 
        printf("\nDoubly Linked List: ");
        display(head); 
        return 0; 
    }