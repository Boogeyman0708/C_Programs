#include<stdio.h>
int main()
{
	int n,i,j;
	char x='A';
	printf("Enter total row no: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",x);
			x++;
		}
		x='A';
		printf("\n");
	}
}