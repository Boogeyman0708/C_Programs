#include<stdio.h>
int main()
{
	int n,i,j;
	char x,y='A';
	printf("Enter total row no: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			x=y+(i-1);
			printf("%c",x);
		}
		printf("\n");
	}
}