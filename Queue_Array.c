/*
 * Queue Implementation using Array
 * 
 * Description:
 * A queue is a linear data structure that follows First In First Out (FIFO) principle.
 * This implementation uses an array to store elements and provides basic operations:
 * - Enqueue: Add an element to the rear
 * - Dequeue: Remove an element from the front
 * 
 * Time Complexity: O(1) for both enqueue and dequeue
 * Space Complexity: O(n) where n is the size of queue
 */

#include <stdio.h> 
#define SIZE 5 
int queue[SIZE]; 
int front = -1, rear = -1; 
void enqueue(int val) { 
    if (rear == SIZE - 1) printf("Queue Overflow!\n"); 
    else { if (front == -1) front = 0; 
        queue[++rear] = val; 
    } 
} 
void dequeue() { 
    if (front == -1 || front > rear) printf("Queue Underflow!\n"); 
    else printf("Dequeued: %d\n", queue[front++]); 
} 
void display() { 
    if (front == -1 || front > rear) printf("Queue is empty\n"); 
    else { printf("Queue elements: "); 
        for (int i = front; i <= rear; i++) printf("%d ", queue[i]); 
        printf("\n"); 
    } 
} 
int main() { 
    enqueue(10); 
    enqueue(20); 
    enqueue(30); 
    display(); 
    dequeue(); 
    display(); 
    return 0; 
}