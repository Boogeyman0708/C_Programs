#include<stdio.h>
int main()
{
	int a[20],n,i;
	
	printf("Enter no of element(max 20) : ");
	scanf("%d\n",&n);
	for(i = 0; i < n; i++)
	{
		printf("Enter element : ");
		scanf("%d",&a[i]);
	}
	return 0;
}