#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	return(x*sin(x)+cos(x));
}
float fd(float x)
{
	return(x*cos(x));
}
int main()
{
	float x0,x1,hn;
	int i;
	printf("Enter the value of x0: ");
	scanf("%f",&x0);
	printf("\n n\t f(xn)\t\t f'(xn)\t hn=-(f(xn)/f'(xn))\t xn+1=xn+hn");
	for(i=0;i<=20;i++)
	{
		if(fd(x0)==0)
		{
			printf("\nError");
		}
		else
		{
			hn=((f(x0)/fd(x0))*(-1));
			x1=x0+hn;
			printf("\n%d\t %f\t %f\t %f\t %f",i,f(x0),fd(x0),hn,x1);
			if(f(x0)==0)
			{
				return(0);
			}
		}
		x0=x1;
	}
	printf("\n\n\n The required root is: %.4f",x0);
}