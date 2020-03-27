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

int findMax(node*head)
{
	node*temp;
	temp=head;
	int max = temp->info;
	temp=head->next;
	while(temp!=NULL)
	{
		if(max<temp->info)
		{
			max=temp->info;
		}
		temp=temp->next;
	}
	return max;
}
int findMin(node*head)
{
	node*temp;
	temp=head;
	int min = temp->info;
	temp=head->next;
	while(temp!=NULL)
	{
		if(min>temp->info)
		{
			min=temp->info;
		}
		temp=temp->next;
	}
	return min;
}

void main()
{
	node*start = NULL;
	int val;

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
	start = insertNodeAtBegin(start,val);
	display(start);
	int maximum=findMax(start);
	int minimum=findMin(start);
	printf("\nMax element is:%d ",maximum);
	printf("\nMin element is:%d ",minimum);
	printf("\nDifference is : %d",maximum-minimum);
	
}
