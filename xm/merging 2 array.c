#include<stdio.h>

void merge(int a[], int m, int b[], int n, int r[]);

int main()
{
	int a1[]={1,3,5,7,9};
	int a2[]={2,4,5,6,8,10,12};
	int r[12];
	int i =0;
	
	merge(a1,5,a2,7,r);
	for (i =0 ; i<12 ; i++)
	{
		printf("r[%d] = %d\n",i, r[i]);
	}
}

void merge(int a[], int m, int b[], int n, int r[])
{
	int i=0 ,j=0 , k=0 ;
	while (i<m && j<n)
	{
		if(a[i] < b[j])
		{
			r[k] = a[i];
			k++;
			i++;
		}
		else
		{
			r[k] = b[j];
			k++;
			j++;
		}
		while (i < m)
		{
			r[k] = a[i];
			k++;
			i++;
		}
		while (j < n)
		r[k] = b[j];
		k++;
		j++;
	}
}









