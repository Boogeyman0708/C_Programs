#include<stdio.h>
int main()
{
	int n,sum=0,a=0;
	printf("Enter your 1st number ");
	scanf("%d",&n);
	for(sum=0;sum<=100;sum++)
	{
		if(a<=100)
		{
			a=sum+n;
			sum=a;
			printf("\nEnter your another number ");
			scanf("%d",&n);	
		}		
	}
	printf("Sum of total entered number crossed 100 & total sum is %d", a+n);
}