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

void count_frequency(node*head)
{

	node*temp =head;
	int i=0,j=0,count;
	int array[1000];
	while(temp!=NULL)
	{
		array[i]=temp->info;
		temp=temp->next;
		i++;
	}
	int size = i;
	i=0;
	
	int freq[1000];
	for(i=0;i<size;i++)
	{
		freq[i]=-1;
	}
	for(i=0;i<size;i++)
	{
		count=1;
		for(j=i+1;j<size;j++)
		{
			if(array[i]==array[j])
			{
				++count;
				freq[j]=0;
			}
		}
		if(freq[i]!=0)
		{
			freq[i]=count;
		}
	
	}
	
	for(i=0;i<size;i++)
	{
		if(freq[i]!=0)
		{
			printf("%d occurs %d times\n",array[i],freq[i]);
		}
		
	}
	
	
}
void main()
{
	node*start = NULL;
	int val;

	int n;
	printf("enter no of char you want to insert : ");
	scanf("%d",&n);
	while(n--)
	{
			printf("enter the item to be inserted : ");
			scanf(" %d",&val);
			start = insertNodeAtEnd(start,val);
			
	}
	
	count_frequency(start);
}
