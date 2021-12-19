#include<stdio.h>
int check(int n);
int main()
{
	int n,t;
	printf("enter a number ");
	scanf("%,&n");
	t=check(n);
	if(t==1)
	{
		printf("\n%d is odd",n);
	}
	else
	{
		printf("%d is even ",n);
	}
	int check(int n)
	{
		if(n%2==1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}