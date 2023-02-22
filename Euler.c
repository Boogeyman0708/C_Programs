#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x,float y)
{
	return(x+y);
}
int main ()
{
	float x,y,xn,h,n;
	int i;
	printf ("Enter the starting value of x and y: ");
	scanf ("%f %f",&x,&y);
	printf("\nEnter the value of xn: ");
	scanf("%f",&xn);
	printf("\nEnter the steplength: ");
	scanf("%f",&h);
	n=(xn-x)/h;
	for(i=0;i<n;i++)
	{
		y=y+(h*f(x,y));
		x=x+h;
	}
	printf("\nThe result is: %f",y);
	getch();
}