#include<stdio.h>
#include<stdlib.h>
void isort(int *a,int n);
void linearsearch(int *a,int n);
void binarysearch(int *a,int n);

int main()
{
	int *arr= NULL;
	int n;
	int ch;
	int i;
	
	printf("Enter size of the array\n");
	scanf("%d",&n);
	
	arr = (int*)calloc(n,sizeof(int));
	
	printf("\nEnter the elements one by one\n");
	for(i=0;i<n;i++)
	{
		scanf("%d\n",(arr+i));
	}
	printf("The array is :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(arr+i));
	}
	while(1)
	{
		printf("Enter:\n1 For Linear Search\n2 For Binary Search\n3 For Exit\n");
		do
		{
			printf("Enter Choice:");
			scanf("%d",&ch);
		}while(ch<1||ch>3);
		if(ch==3)
		{
			break;
		}
		switch(ch)
		{	
		case 1:
			linearsearch(arr,n);
			break;
		case 2:
			isort(arr,n);
			binarysearch(arr,n);
			break;		
		}
	}
	free(arr);
	return 0;
}

void linearsearch(int *a,int n)
{
	int i,key,fl=0;
	printf("Enter value to search\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("\nKey found at position ; %d",i);
			fl=1;
			break;
		}
	}
	if(fl==0)
	{
		printf("\nKey not found\n");
	}
}

void binarysearch(int *a,int n)
{
	int i,lb=0,ub=n-1,mid,key,fl=0;
	printf("Enter value to search\n");
	scanf("%d",&key);
	
	while(lb<=ub)
	{
		mid = (lb+ub)/2;
		if(key>*(a+mid))
		{
			lb=mid + 1;
		}
		else if(key<*(a+mid))
		{
			ub=mid -1;
		}
		else
		{
			printf("\nKey found at %d\n",mid);
			fl=1;
			break;
		}
		if(fl==0)
		{
			printf("Key not found\n");
		}
	}
}

void isort(int *a, int n)
{
	int i,j,k;
	for(i=1;i<j;i++)
	{
	 	j=i-1;
	 	k=*(a+i);
	 	while(j>0 && *(a+j)>k)
	 	{
	 		*(a+j+1)= *(a+j);
			j--;	
		}
		*(a+j+1)=k;
	}
}













