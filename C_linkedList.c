/*
 * Circular Linked List Implementation
 * 
 * Description:
 * A circular linked list is a linked list where the last node points back to the
 * head node, creating a circle of nodes. This implementation demonstrates creation
 * and traversal of a circular linked list.
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
    if (head == NULL) return; 
    do { 
        printf("%d -> ", temp->data); 
        temp = temp->next; 
    } 
    while (temp != head); 
    printf("(back to head)\n"); 
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
        else { temp->next = newNode; 
            temp = newNode; 
        } 
        temp->next = head; 
    } 
    printf("\nCircular Linked List: "); 
    display(head); 
    return 0; 
}