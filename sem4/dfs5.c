#include<stdio.h>
#include<stdbool.h>

#define MAX_SIZE 100

int graph[MAX_SIZE][MAX_SIZE];
bool visited[MAX_SIZE];

void dfs(int current,int n)
{
	visited[current]=true;
	printf("%d -> ",current);
	for(int i=0;i<n;i++)
	{
		if(graph[current][i] && !visited[i])
		{
			dfs(i,n);
		}
	}
}

int main()
{
	int n,start;
	printf("Enter the no of vertices: ");
	scanf("%d",&n);
	printf("\nEnter the adjacency matrix: \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&graph[i][j]);
		}
	}
	printf("\nEnter the starting vertex: ");
	scanf("%d",&start);
	dfs(start,n);
	return 0;
}