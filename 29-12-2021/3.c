#include<stdio.h>
int main()
{
	int n,i,x,s;
	printf("Enter row number: ");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(s=1;s<=(n-i);s++)
		{
		printf(" ");
		}		
		for(x=1;x<=(2*i-1);x++)
		{
			printf("*");
		}
		printf("\n");
	}
} 
	