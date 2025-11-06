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