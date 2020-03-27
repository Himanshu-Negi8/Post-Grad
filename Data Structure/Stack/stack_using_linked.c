#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node*next;
};
typedef struct node node;

node*push(node*);
node*pop(node*);
void disp(node*);


int main()
{
	char ch;
	node*top=NULL;
		do{
		
		
		int option;
		
	
		printf("\nEnter one of these operations : \n1.Push the element\n2.Pop the element\n3.Display the stack\n");
		scanf("%d",&option);
		if(option==1)
		{
			top =push(top);
		
		}
		else if(option==2)
		{
			if(top==NULL)
			{
				printf("\nStack is already empty.\n");
			}
			else
			{
			  top =	pop(top);
			}
		}
		else if(option==3)
		{
			if(top==NULL)
			{
				printf("\nStack is empty.\n");
			}
			else
			{
			  disp(top);
			}
		}
		printf("\nDo you want to continue:");
		scanf(" %c",&ch);
	}while(ch=='y'||ch=='Y');
}

node*push(node*tp)
{
	node*p = NULL;
	int x;
	printf("\nEnter the data to be entered:");
	scanf("%d",&x);
	p=(node*)malloc(sizeof(node));
	p->info =x;
	p->next=tp;
	tp=p;
	return tp;
}

node*pop(node*tp)
{
	node*p=tp;
	printf("\npopped element is : %d",p->info);
	tp=tp->next;
	free(p);
	return tp;
}
void disp(node*tp)
{
	node*p;
	
	p=tp;
	while(p!=NULL)
	{
		printf("%d ",p->info);
		p=p->next;
	}
}
