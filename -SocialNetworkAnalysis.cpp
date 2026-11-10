#include <stdio.h>

#define MAX 10

int graph[MAX][MAX];
int visited[MAX];

void DFS(int node, int n)
{
    visited[node] = 1;
    printf("%d ", node);

    for(int i = 0; i < n; i++)
    {
        if(graph[node][i] == 1 && !visited[i])
        {
            DFS(i, n);
        }
    }
}

int main()
{
    int users, friendships;
    int u, v;
    int start;

    printf("Enter number of users: ");
    scanf("%d", &users);

    printf("Enter number of friendships: ");
    scanf("%d", &friendships);

    printf("Enter friendship pairs:\n");

    for(int i = 0; i < friendships; i++)
    {
        scanf("%d %d", &u, &v);

        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    printf("Enter starting user: ");
    scanf("%d", &start);

    printf("\nConnected Friends (DFS): ");
    DFS(start, users);

    return 0;
}