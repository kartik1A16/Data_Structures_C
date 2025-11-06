/*
 * Linear Search Algorithm
 * 
 * Description:
 * Linear search is the simplest search algorithm that searches for an element
 * in an array by checking each element sequentially until a match is found
 * or the end of array is reached.
 * 
 * Time Complexity: O(n) - where n is the size of array
 * Space Complexity: O(1)
 */

#include <stdio.h> 
int main() { 
    int a[5] = {10, 20, 30, 40, 50}, key, i, found = 0; 
    printf("Enter element to search: "); 
    scanf("%d", &key); 
    for (i = 0; i < 5; i++) { 
        if (a[i] == key) { 
            printf("Element found at position %d\n", i + 1); 
            found = 1; 
            break; 
        } 
    } 
    if (!found) 
    printf("Element not found\n"); 
    return 0; 
}