#include<stdio.h>
int main()
{
	int n;
	printf("Enter your number ");
	scanf("%d",&n);
	if(n%11==0)
	{
		printf("Entered number is divisible by 11");
	}
	else
	{
		printf("Entered number is not divisible by 11");
	}
}