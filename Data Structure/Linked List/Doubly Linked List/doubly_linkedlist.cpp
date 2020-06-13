#include<stdio.h>
#include<stdlib.h>


typedef struct node{
	
	int info;
	struct node*next,*prev;
}node;

node*insertNodeAtBegin(node*head,int value)
{
	node*temp = (node*)malloc(sizeof(node));
	
	
	
	if(head==NULL)
	{
		temp->info=value;
		temp->prev=NULL;
		temp->next=NULL;
		head=temp;
		return head;
	}
	else
	{
		
		temp->info=value;
		temp->prev=NULL;
		head->prev=temp;
		temp->next=head;
		head=temp;
		return head;
	}
}

void display(node*tp)
{
	node*p;
	
	p=tp;
	while(p!=NULL)
	{
		printf("%d ",p->info);
		p=p->next;
	}
	printf("\n");
}

void main()
{
	node*start = NULL;
	int val,k;

	printf("Enter the item to be inserted : ");
	scanf("%d",&val);
	start = insertNodeAtBegin(start,val);
	printf("Enter the item to be inserted : ");
	scanf("%d",&val);
	display(start);
}
