/*
 * Bubble Sort Algorithm
 * 
 * Description:
 * Bubble sort repeatedly steps through the list, compares adjacent elements
 * and swaps them if they are in the wrong order. The pass through the list
 * is repeated until no more swaps are needed.
 * 
 * Time Complexity: O(n^2)
 * Space Complexity: O(1)
 */

#include <stdio.h> 
int main() { 
    int a[5] = {64, 34, 25, 12, 22}, n = 5, temp; 
    for (int i = 0; i < n - 1; i++) 
    for (int j = 0; j < n - i - 1; j++) 
    if (a[j] > a[j + 1]) { 
        temp = a[j]; a[j] = a[j + 1]; 
        a[j + 1] = temp; 
    } 
    printf("Sorted array: "); 
    for (int i = 0; i < n; i++) 
    printf("%d ", a[i]); return 0; 
}