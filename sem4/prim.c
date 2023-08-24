#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

#define max_size 100

int graph[max_size][max_size];
int parent[max_size];
int key[max_size];
bool mstset[max_size];

int minkey(int n)
{
	int min = INT_MAX,min_index;
	for(int i=0;i<n;i++)
	{
		if(!mstset[i] && key[i]<min)
		{
			min=key[i];
			min_index=i;	
		}
	}
	return min_index;
}

void prim(int n)
{
	for(int i=0;i<n;i++)
	{
		key[i]=INT_MAX;
		mstset[i]=false;
	}
	key[0]=0;
	parent[0]=-1;
	for(int i=0;i<n-1;i++)
	{
		int u=minkey(n);
		mstset[u]=true;
		for(int v=0;v<n;v++)
		{
			if(graph[u][v] && !mstset[v] && graph[u][v] <key[v])
			{
				parent[v]=u;
				key[v]=graph[u][v];
			}
		}
	}
}

int main()
{
	int n;
	printf("Enter the number of the vertices: ");
	scanf("%d",&n);
	printf("\nEnter the adjacency matrix: \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&graph[i][j]);
		}
	}
	prim(n);
	for (int i=1;i<n;i++)
	{
		printf("%d->%d\n",parent[i],i);
	}
	return 0;
}