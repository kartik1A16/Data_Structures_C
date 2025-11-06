/*
 * Insertion Sort Algorithm
 * 
 * Description:
 * Insertion sort builds the final sorted array one item at a time by repeatedly
 * inserting a key element into its correct position within the sorted portion
 * of the array.
 * 
 * Time Complexity: O(n^2) in worst and average case, O(n) in best case
 * Space Complexity: O(1)
 */

#include <stdio.h> 
int main() { 
    int a[5] = {5, 2, 4, 6, 1}, n = 5, key, j; 
    for (int i = 1; i < n; i++) { 
        key = a[i]; 
        j = i - 1; 
        while (j >= 0 && a[j] > key) { 
            a[j + 1] = a[j]; j--; 
        } 
        a[j + 1] = key; 
    } 
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) 
    printf("%d ", a[i]); 
    return 0;
}