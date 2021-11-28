//Write a c program to find the prime factors of a user given number.
#include<stdio.h>
void main()
{
	int i,j,n,c;
	
	printf("Enter the Number: ");
	scanf("%d",&n);
	printf("Prime factors are: ");
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			c=0;
			for(j=1;j<i;j++)
			{
				if(i%j==0)
				 c++;
			}
			if(c==1)
			printf("\n%d",i);
		}
	}
}