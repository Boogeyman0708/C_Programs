#include<stdio.h>

#define INFINITY 999
#define MAX_SIZE 100

void FloydWarshall(int graph[MAX_SIZE][MAX_SIZE],int n);

int main()
{
	int graph[MAX_SIZE][MAX_SIZE],n;
	printf("Enter the no of vertices: ");
	scanf("%d",&n);
	printf("\nEnter the adjacency martrix: ");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &graph[i][j]);
		}
	}
	FloydWarshall(graph, n);
	return 0;
}

void FloydWarshall(int graph[MAX_SIZE][MAX_SIZE],int n)
{
	int dist[MAX_SIZE][MAX_SIZE],i,j,k;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			dist[i][j] = graph[i][j];
		}
	}
	for (k = 0; k < n; k++);
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (dist[i][k] + dist[k][j] < dist[i][j])
				{
					dist[i][j] = dist[i][k] + dist[k][j];
				}
			}
		}
	}
	
    printf("Shortest path between each pair of vertices:\n");
    for (int i = 0; i < n; i++)
    {
    	for (int j = 0; j <n; j++)
    	{
    		if (dist[i][j]== INFINITY)
    		{
    			printf("INF\t");
			}
			else
			{
				printf("%d\t",dist[i][j]);
			}
		}
		printf("\n");
	}
	
}









