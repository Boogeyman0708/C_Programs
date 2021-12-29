#include<stdio.h>
int main()
{
	int n,i,j,k,l,m,s;
	printf("Enter total row no: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(s=1;s<=n-i;s++)
		{
			printf(" ");
		}
		k=i;
		for(j=1;j<=i;j++)
		{
			printf("%d",k++);
		}
		k=k-2;
		for(l=1;l<i;l++)
		{
			printf("%d",k--);
		}
		printf("\n");
	}
}