/*
 * Graph using Adjacency Matrix
 * 
 * Description:
 * This implementation represents a graph using an adjacency matrix where each cell [i][j]
 * indicates if there is an edge between vertex i and vertex j.
 * Value 1 indicates an edge exists, 0 indicates no edge.
 * 
 * Space Complexity: O(V^2) where V is the number of vertices
 */

#include <stdio.h> 
int main() { 
    int n; 
    printf("Enter number of vertices: "); 
    scanf("%d", &n); 
    int graph[n][n]; 
    printf("Enter adjacency matrix:\n"); 
    for (int i = 0; i < n; i++) 
    for (int j = 0; j < n; j++) 
    scanf("%d", &graph[i][j]); 
    printf("\nGraph adjacency matrix:\n"); 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) 
        printf("%d ", graph[i][j]); 
        printf("\n"); 
    } 
    return 0; 
}