#include <stdio.h> 
#include <stdlib.h> 
struct Node { 
    int data; 
    struct Node *left, *right; 
}; 
struct Node* createNode(int data) 
{ 
    struct Node* node = (struct Node*)malloc(sizeof(struct Node)); 
    node->data = data; 
    node->left = node->right = NULL; 
    return node; 
} 
void display(struct Node *root) { 
    if (root == NULL) return; 
    printf("%d ", root->data); 
    display(root->left); 
    display(root->right); 
} 
int main() { 
    struct Node *root = createNode(1); 
    root->left = createNode(2); 
    root->right = createNode(3); 
    root->left->left = createNode(4); 
    root->left->right = createNode(5); 
    printf("Tree (Preorder Display): "); 
    display(root); 
    return 0; 
}