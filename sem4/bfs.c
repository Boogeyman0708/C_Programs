#include <stdio.h>
#include <stdbool.h>

#define max_size 100

int graph[max_size][max_size];
int queue[max_size];
int front = 0, rear = -1;
bool visited[max_size];

void bfs(int start, int n)
{
	visited[start]=true;
	queue[++rear]=start;
	while(front<=rear)
	{
		int current = queue[front++];
		printf("%d",current);
		for(int i=0;i<n;i++)
		{
			if (graph[current][i] && !visited[i])
			{
				visited[i]= true;
				queue[++rear]=i;
			}
		}
		
	}
	
}





int main()
{
	int n;
	printf("Enter the no of vertices: ");
	scanf("%d",&n);
	printf("\nEnter the adjacency matrix:\n");
	for (int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&graph[i][j]);
		}
	}
	int start;
	printf("Enter the starting vertex: ");
	scanf("%d",&start);
	printf("BFS Tracersal: ");
	bfs(start,n);
	return 0;
}










