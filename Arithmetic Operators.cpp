#include<stdio.h>
int main()
{
	int a,b,c;
	// used a=20 & b=11
	printf("Value of a is ");
	scanf("%d",&a);
	printf("\n Value of b is ");
	scanf("%d",&b);
	c=a+b;
	printf("\n Added value is %d", c);
	c=a-b;
	printf("\n Subtracted value is %d", c);
	c=a*b;
	printf("\n Multiplied value is %d", c);
	c=a/b;
	printf("\n Devided value is %d", c);
	c=a%b;
	printf("\n Reminder is %d", c);
	c=++a;
	printf("\n Pre-increment of a %d", c);
	printf("\n New value of a is %d", a);
	c=b++;
	printf("\n Post-increment of b %d", c);
	printf("\n New value of b is %d", b);
}