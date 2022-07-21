#include<stdio.h>
int main()
{
	int a[20],n,i,k,temp,b;
	
	printf("Enter the sixe of array (max 20) : ");
	scanf("%d",&n);
	
	for(i = 0; i < n; i++)
	{
		printf("Enter element : ");
		scanf("%d",&a[i]);
	}
	
	for(b = 0;b < n-1;b++)
	{
		for( k = 0; k < (n-1); k++ )
		{
			if(a[k] > a[k+1])
			{
				temp = a[k];
				a[k] = a[k+1];
				a[k+1] = temp;
			}
		}
	}
	
	printf("The array is :\t");
	for(i=0 ; i<n ; i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}






