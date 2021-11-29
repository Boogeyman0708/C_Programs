#include<stdio.h>
int main()
{
	int  i,n,a=-2;
	printf("Enter your last term ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		a+=3;
		printf("%d,",a);
	}
	printf("%d",a+3);
}
