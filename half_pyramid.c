#include<stdio.h>
int main()
{
	int space,star,row,nrow;
	printf("Enter total row number ");
	scanf("%d",&nrow);
	for(row=1;row<=nrow;row++)
	{
		for(space=1;space<=(nrow-row);space++)
		{
			printf(" ");
		}
		for(star=1;star<=row;star++)
		{
			printf("*");
		}
		printf("\n");
	}

}