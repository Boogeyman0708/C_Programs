#include<stdio.h>
int max(int num1,int num2);
int main()
{
	int a,b;
	int ret;
	printf("Enter your first number ");
	scanf("%d",&a);
	printf("\n Enter second number ");
	scanf("%d",&b);
	ret =max(a,b);
	printf("Max value is : %d\n",ret);
	return 0;
}
int max(int num1,int num2)
{
	int result;
	if (num1>num2)
		result=num1;
	else
		result=num2;
	
	return result;
}
