#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	
	int info;
	struct node*next;
}node;

node*insertNodeAtBegin(node*head,int value)
{
	node*temp = (node*)malloc(sizeof(node));
	
	
	
	if(head==NULL)
	{
		temp->info=value;
		temp->next=NULL;
		head=temp;
		return head;
	}
	else
	{
		temp->info=value;
		temp->next=head;
		head=temp;
		return head;
	}
}
node*insertNodeAtEnd(node*head,int value)
{
	
	node*loc;
	loc=head;
	
	if(loc==NULL)
	
		return insertNodeAtBegin(head,value);
	else
	{
		node*temp = (node*)malloc(sizeof(node*));
		temp->info=value;
		temp->next=NULL;
		
		while(loc->next!=NULL)
		{	
			loc=loc->next;
		}
		
		loc->next=temp;
		return head;
	}
	
	
	
}

node*insertNodeAtK(node*head,int val,int k)
{
	int i=0;
	if(k==1)
	{
		return insertNodeAtBegin(head,val);
	}
	else
	{
		node*temp=(node*)malloc(sizeof(node));
		node*pos;
		pos=head;
		
		for(i=0;i<k-2;i++)
		{
			pos=pos->next;
		}
		temp->info=val;
		temp->next=pos->next;
		pos->next=temp;
		
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
	start = insertNodeAtBegin(start,val);
	printf("Enter the item to be inserted : ");
	scanf("%d",&val);
	start = insertNodeAtBegin(start,val);
	printf("enter the item to be inserted : ");
	scanf("%d",&val);
	start = insertNodeAtEnd(start,val);
	printf("enter the item to be inserted : ");
	scanf("%d",&val);
	start = insertNodeAtEnd(start,val);	
	printf("enter the item to be inserted and location: ");
	scanf("%d%d",&val,&k);
	start = insertNodeAtK(start,val,k);	
	
	display(start);
}
