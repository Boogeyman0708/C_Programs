#include<stdio.h>

int main()
{
	float a[10][10],ratio,x[10];
	int i,j,k,n;
	printf("Enter the order of the coefficient matrix: ");
	scanf("%d",&n);
	printf("Enter the elements with row wise: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n;j++)
		{
			printf("a[%d][%d]: ",i+1,j+1);
			scanf("%f",&a[i][j]);
		}
	}
	
	for (j=0;j<n;j++)	
	{
		for(i=0;i<n;i++)
		{																				
			if (i>j)
			{
				ratio=a[i][j]/a[j][j];
				for(k=0;k<=n;k++)
				{
					a[i][k]=a[i][k]-ratio*a[j][k];
				}
			}
		}
	}
	x[n-1]=a[n-1][n]/a[n-1][n-1];
	
	for(k=n-2;k>=0;k--)
	{
		x[k]=a[k][n];
		for(j=k+1;j<n;j++)
		{
			x[k]=x[k]-a[k][j]*x[j];
		}
		x[k]=x[k]/a[k][k];				
	}
	printf("\n The solution set is: \n");
	for(i=0;i<n;i++)
	{
		printf("X[%d]=%f \n",i,x[i]);
	}
	getch();
	return(0);
	
}


//  00	01	02	03	
//	10	11	12	13	
//	20	21	22	23



