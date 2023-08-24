#include <stdio.h>
#include<stdbool.h>

#define MAX_SIZE 100

int graph[MAX_SIZE][MAX_SIZE];
bool visited[MAX_SIZE];

void dfs(int current,int n)
{
	visited[current]= true;
	printf("%d\t",current);
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
	int n;
	printf("Enter the number of vertices: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&graph[i][j]);
		}
	}
	int start;
	printf("\nEnter the starting vertex: ");
	scanf("%d",&start);
	printf("\nThe DFS Traversal: ");
	dfs(start,n);
	return 0;
}



