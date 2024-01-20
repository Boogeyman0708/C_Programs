#include<stdio.h>
#include<stdbool.h>

#define MAX_SIZE 100

int graph[MAX_SIZE][MAX_SIZE];
int queue[MAX_SIZE];
int front=0,rear=-1;
bool visited[MAX_SIZE];



void bfs(int start, int n)
{
	visited[start]=true;
	queue[++rear]=start;
	while(front<=rear)
	{
		int current= queue[front++];
		printf("%d",current);
		for(int i=0;i<n;i++)
		{
			if(graph[current][i] && !visited[i])
			{
				visited[i]=true;
				queue[++rear]=i;
			}
		}
	}
}


int main()
{
	int n,i,j,start;
	printf("Enter the no of vertices: ");
	scanf("%d",&n);
	printf("\nEnter the adjecency matrix value one by one: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&graph[i][j]);
		}
	}
	printf("\nEnter the starting vertex: ");
	scanf("%d",&start);
	printf("\nThe BFS traversal: ");
	bfs(start,n);
	return 0;
}












