/*
 * Binary Tree Implementation
 * 
 * Description:
 * A binary tree is a tree data structure where each node has at most two children,
 * referred to as left child and right child. This implementation demonstrates
 * basic tree creation and traversal operations.
 * 
 * Space Complexity: O(n) where n is number of nodes
 */

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