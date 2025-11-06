/*
 * Stack Implementation using Array
 * 
 * Description:
 * A stack is a linear data structure that follows Last In First Out (LIFO) principle.
 * This implementation uses an array to store elements and provides basic operations:
 * - Push: Add an element to the top
 * - Pop: Remove an element from the top
 * 
 * Time Complexity: O(1) for both push and pop
 * Space Complexity: O(n) where n is the size of stack
 */

#include <stdio.h> 
#define SIZE 5 
int stack[SIZE], top = -1; 
void push(int val) { 
    if (top == SIZE - 1) printf("Stack Overflow!\n"); 
    else stack[++top] = val; 
} 
void pop() { 
    if (top == -1) printf("Stack Underflow!\n"); 
    else printf("Popped: %d\n", stack[top--]); 
} 
void display() { 
    if (top == -1) printf("Stack is empty\n"); 
    else { 
        printf("Stack elements: "); 
        for (int i = top; i >= 0; i--) printf("%d ", stack[i]); 
        printf("\n"); 
    } 
} 
int main() { 
    push(10); 
    push(20); 
    push(30); 
    display(); 
    pop(); 
    display(); 
    return 0; 
}