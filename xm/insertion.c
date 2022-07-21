#include<stdio.h>

void insertion_sort(int a[], int length);

int main()
{
	int a[]={8,4,9,5,7,6,3,2,},i;
	insertion_sort(a, 8);
	for (i = 0;i < 8;i++ )
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	
	return 0;
}

void insertion_sort(int a[], int length)
{
	int i, j, key;
	
	for(i = 1;i < length;i++)
	{
		key = a[i];
		j = i-1;
		while(j >= 0 && a[j] > key)
		{
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1] = key;
	}
}







