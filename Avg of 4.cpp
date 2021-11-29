#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	float g;
	printf("\n The first value");
	scanf("%d",&a);
	printf("\n The second value");
	scanf("%d",&b);
	printf("\n The third value");
	scanf("%d",&c);
	printf("\n The fourth value");
	scanf("%d",&d);
	e=a+b+c+d;
	g=e/4.0;
	printf("\n The Avarage of the numbers  %f",g);
	return 0;
}
