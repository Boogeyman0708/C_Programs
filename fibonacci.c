#include<stdio.h>
int main()
{
	int a,b,sum,n,i;
	printf("Enter the number of terms ");
	scanf("%d",&n);
	a=0;
	b=1;
	for(i=1;i<=n;i++)
	{
		printf("%d",a);
		if(i<n)
		{
			printf(",");
		}
		sum=a+b;
		a=b;
		b=sum;
	}
}