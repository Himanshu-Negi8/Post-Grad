#include<stdio.h>
#include<stdlib.h>

int max=100;

void push(int[],int,int*);

void pop(int[],int*);
void display(int[],int*);
void main()
{
	char ch;
	int a[max];
	
	int top=-1;
	do{
		
		
		int option;
		
	
		printf("\nEnter one of these operations : \n1.Push the element\n2.Pop the element\n3.Display the stack\n");
		scanf("%d",&option);
		
		if(option==1)
		{
			if(top==max-1)
			{
				printf("Stack is Full already.\n");
			}
			else
			{
				push(a,max,&top);
			}
		}
		else if(option==2)
		{
			if(top==-1)
			{
				printf("Stack is already empty.\n");
			}
			else
			{
				pop(a,&top);
			}
		}
		else if(option==3)
		{
			if(top==-1)
			{
				printf("Empty Stack.\n");
			}
			else
			{
				
				display(a,&top);
			}
		}
		else
		{
			printf("Wrong choice.\n");
		}
		printf("\nDo you want to continue:");
		scanf(" %c",&ch);
		
	}while(ch=='Y'||ch=='y');
}

void push(int a[],int max,int*top)
{
	*top=*top+1;
	
	int item;
	printf("Enter the item to be inserted : ");
	scanf("%d",&item);
	a[*top]=item;
}

void pop(int a[],int*top)
{
	int pop_element;
	pop_element=a[*top];
	
	printf("%d is popped element.\n",pop_element);
	*top=*top-1;
}

void display(int a[],int*top)
{
	int temp;
	temp=*top;
	printf("\nStack elements are:");
	while(temp>-1)
	
	{
		printf("%d ",a[temp]);
		temp--;
	}
}
