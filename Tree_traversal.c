/*
 * Binary Tree Traversals
 * 
 * Description:
 * This program implements three main types of tree traversals:
 * 1. Inorder (Left-Root-Right)
 * 2. Preorder (Root-Left-Right)
 * 3. Postorder (Left-Right-Root)
 * 
 * Time Complexity for all traversals: O(n) where n is number of nodes
 * Space Complexity: O(h) where h is height of tree (due to recursion stack)
 */

#include <stdio.h> 
#include <stdlib.h> 
struct Node { 
    int data; 
    struct Node *left, *right; 
}; 
struct Node* newNode(int data) { 
    struct Node* node = (struct Node*)malloc(sizeof(struct Node)); 
    node->data = data; node->left = node->right = NULL; 
    return node; 
} 
void inorder(struct Node* root) { 
    if (root != NULL) { 
        inorder(root->left); 
        printf("%d ", root->data); 
        inorder(root->right); 
    } 
} 
void preorder(struct Node* root) 
{ 
    if (root != NULL) { 
        printf("%d ", root->data); 
        preorder(root->left); 
        preorder(root->right); 
    } 
} 
void postorder(struct Node* root) { 
    if (root != NULL) { 
        postorder(root->left); 
        postorder(root->right); 
        printf("%d ", root->data); 
    } 
} 
int main() { 
    struct Node *root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
    printf("Inorder: ");
    inorder(root); 
    printf("\nPreorder: "); 
    preorder(root); 
    printf("\nPostorder: "); 
    postorder(root); 
    return 0;
}