/*
 * Singly Linked List Implementation
 * 
 * Description:
 * A singly linked list is a linear data structure where each node contains data
 * and a pointer to the next node. This implementation demonstrates creation and
 * basic traversal of a singly linked list.
 * 
 * Time Complexity: O(n) for traversal
 * Space Complexity: O(n) where n is number of nodes
 */

#include <stdio.h> 
#include <stdlib.h> 
struct Node { 
    int data; 
    struct Node *next; 
}; 
void display(struct Node *head) { 
    struct Node *temp = head; 
    while (temp != NULL) { 
        printf("%d -> ", temp->data); 
        temp = temp->next; 
    } 
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
        newNode->next = NULL; 
        if (head == NULL) head = temp = newNode; 
        else { 
            temp->next = newNode; 
            temp = newNode; 
        } 
    } 
    printf("\nSingly Linked List: "); 
    display(head); 
    return 0; 
}