#include<stdio.h>
int main()
{
	int a=-1,i,n;
	printf("Enter your last term ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a+=2;
		printf("%d",a);
		if(i<n)
		{
			printf(",");
		}
	}
}