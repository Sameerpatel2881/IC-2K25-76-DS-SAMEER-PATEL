#include <stdio.h>

#define MAX 10

int graph[MAX][MAX];
int visited[MAX];

void BFS(int start, int n)
{
    int queue[MAX];
    int front = 0, rear = 0;

    visited[start] = 1;
    queue[rear++] = start;

    printf("\nTraversal Path: ");

    while(front < rear)
    {
        int current = queue[front++];

        printf("%d ", current);

        for(int i = 0; i < n; i++)
        {
            if(graph[current][i] == 1 && !visited[i])
            {
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }
}

int main()
{
    int n, edges;
    int u, v;
    int start;

    printf("Enter number of locations: ");
    scanf("%d", &n);

    printf("Enter number of routes: ");
    scanf("%d", &edges);

    for(int i = 0; i < edges; i++)
    {
        printf("Enter route (source destination): ");
        scanf("%d %d", &u, &v);

        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    printf("Enter starting location: ");
    scanf("%d", &start);

    BFS(start, n);

    return 0;
}