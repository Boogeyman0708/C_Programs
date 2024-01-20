#include<stdio.h>

#define v 10
#define INF 999


void fw(int graph[v][v], int n)
{
	int i,j,k;
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(graph[i][k]+graph[k][j] < graph[i][j])
				{
					graph[i][j]= graph[i][k]+graph[k][j];
				}
			}
		}
	}
	printf("\nThe matrix representing the shortest distance between different edges: ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(graph[i][j]== INF)
			{
				printf("\nDistance of node %d to %d = %4s",i,j,"INF");
			}
			else
			{
				printf("\nDistance of node %d to %d = %d",i,j,graph[i][j]);
			}
		}
	}
}

int main()
{
	int graph[v][v],i,j,n;
	printf("Enter the no of vertices: ");
	scanf("%d",&n);
	printf("\nEnter the cost matrix value one by one: \n");
	printf("For infinite value please enter 999 \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&graph[i][j]);
		}
	}
	fw(graph,n);
	return 0;
}













