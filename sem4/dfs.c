#include <stdio.h>
#include <stdbool.h>

#define max_size 100

int graph[max_size][max_size];
bool visited[max_size];

void dfs(int start,int n)
{
	visited[start]=true;
	printf("%d",start);
	for(int i =0;i<n;i++)
	{
		if (graph[start][i] && !visited[i])
		{
			dfs(i,n);
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
		for( int j=0;j<n;j++)
		{
			scanf("%d",&graph[i][j]);
		}
	}
	int start;
	printf("Enter the starting vertex: ");
	scanf("%d",&start);
	printf("DFS Traversal: ");
	dfs(start,n);
	return 0;
}