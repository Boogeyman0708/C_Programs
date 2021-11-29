#include<stdio.h>
int main()
{
	int a,b,i,n;
	printf("Enter your last term ");
	scanf("%d",&n);
	for(i=0;i<n/2;i++)
	{
		a=i*4+2;
		printf("%d,",a);
		b=i*4+3;
		printf("%d,",b);
	}
	if(n%2!=0)
	{
		i=n/2;
		a=i*4+2;
		printf("%d",a);
	}
}