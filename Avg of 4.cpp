#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	float g;
	printf("The first value");
	scanf("%d",&a);
	printf("The second value");
	scanf("%d",&b);
	printf("The third value");
	scanf("%d",&c);
	printf("The fourth value");
	scanf("%d",&d);
	e=a+b+c+d;
	g=e/4.0;
	printf("The Avarage of the numbers  %f",g);
	return 0;
}