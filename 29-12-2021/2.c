#include<stdio.h>
int main()
{
	int n,i,j,x=0,s;
	printf("Enter total row no: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(s=1;s<=n-i;s++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			x++;			
			printf("%d",x);
		}
		printf("\n");
	}
}