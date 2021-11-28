#include<stdio.h>
int main()
{
	int a,b,c,i,j,t;
	printf("Enter 1st number-");
	scanf("%d",&a);
	printf("Enter 2nd number-");
	scanf("%d",&b);
	printf("Enter 3rd number-");
	scanf("%d",&c);
	if(a>b)
	{
		t=a; a=b; b=t;
	}	
	i=a;j=b;	
	while(j%i!=0)
	{
		t=j%i;
		j=i;
		i=t;
	}
	if(i>c)
	{
		t=i; i=c; c=t;
	}
	j=c;
	while(j%i!=0)
	{
		t=j%i;
		j=i;
		i=t;
	}
	printf("The GCD is %d",i);			
}