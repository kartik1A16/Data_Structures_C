/*
 * Binary Search Algorithm
 * 
 * Description:
 * Binary search finds the position of a target value within a sorted array by
 * repeatedly dividing the search space in half. It compares the target value
 * with the middle element of the array.
 * 
 * Time Complexity: O(log n)
 * Space Complexity: O(1)
 * Note: Array must be sorted for binary search to work
 */

#include <stdio.h> 
int main() { 
    int a[5] = {10, 20, 30, 40, 50}, key, low = 0, high = 4, mid; 
    printf("Enter element to search: "); 
    scanf("%d", &key); 
    while (low <= high) { 
        mid = (low + high) / 2; 
        if (a[mid] == key) { 
            printf("Element found at position %d\n", mid + 1); 
            return 0; 
        } 
        else if (a[mid] < key) low = mid + 1; 
        else high = mid - 1; 
    } 
    printf("Element not found\n"); 
    return 0; 
}