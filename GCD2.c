#include<stdio.h>
int main()
{
	int a,b,c,i,min;
	printf("Enter 1st number-");
	scanf("%d",&a);
	printf("Enter 2nd number-");
	scanf("%d",&b);
	printf("Enter 3rd number-");
	scanf("%d",&c);
	if(a<b)
	{
		if(a<c)
		min=a;
	}
	else 
	if(b<c)
		min=b;
	else
		min=c;
	for(i=min;i>=1;i--)
		if(a%i==0&&b%i==0&&c%i==0)
		{
			printf("The GCD is %d",i);
			break;
		}
}