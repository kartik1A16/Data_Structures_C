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