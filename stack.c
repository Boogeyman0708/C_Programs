#include<stdio.h>

int stack[10],top=-1,element;
#define max 10

void push()
{
	if (top>=max)
	{
		printf("The stack is full\n");
	}
	else
	{
		printf("Enter elements\n");
		scanf("%d",&element);
		top=top+1;
		stack[top]=element;
	}
}

void pop()
{
	if(top==-1)
	{
		printf("The stack is empty\n");
	}
	else
	{
		element=stack[top];
		top=top-1;
		printf("Popped element is : %d",element);
		
	}
}

void display()
{
	if(top==-1)
	{
		printf("The stack is empty");
	}
	else
	{

		int i;
		printf("The stack is : ");
		for (i=top;i>=0;i--)
		{
			printf("%d",stack[i]);
		}
    }
}

int main()
{
	int j,n,ch,loop;

	do
	{
		printf("Enter :\n1 for push\n2 for pop\n3 for display\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter total no of elements\n");
				scanf("%d",&n);
				for(j=1;j<=n;j++)
				{
					push();
				}
			break;
			case 2:
				
			break;
			case 3:
			break;
			default:
				printf("Invalid oparation\n");
		}
		printf("Do you want to continue : enter 1 else 0\n");
		scanf("%d",&loop);	
	}while (loop!=0);
}










































































