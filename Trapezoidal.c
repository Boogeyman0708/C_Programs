#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x)
{
	return(1/(1+pow(x,2))); 
}
int main()
{
	float a,b,h,sum=0.0,sum1=0.0,sum2=0.0;
	int i,n;
	printf ("Enter the upper limit: ");
	scanf ("%f",&b);
	printf ("Enter the lower limit: ");
	scanf ("%f",&a);
	printf ("Enter the number of interval: ");
	scanf ("%d",&n);
	if(n%2!=0)
	{
		printf ("Interval should be even");
		return(0);
	}
	h = (b-a)/n;
	sum1= f(a)+f(b);
	for(i=1;i<n;i++)
	{
		sum2=sum2+f(a+i*h);	
	}
	sum=(h/2)*(sum1+2*sum2);
	printf("The result is: %f",sum);
	return(0);
}












