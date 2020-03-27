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



void count_frequency(node*head)
{

	node*temp =head;
	int i=0,j=0,count=0;
	int array[1000] ={-1};
	while(temp!=NULL)
	{
		array[i]=temp->info;
		printf("%d",array[i]);
		temp=temp->next;
		i++;
	}
	int freq[1000];
	i=0;
	while(array[i]!=-1)
	{
		for(j=i+1;array[j]!=-1;j++)
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
		i++;
	}
	i=0;
	while(array[i]!=-1)
	
	{
		if(freq[i]!=0)
		{
			printf("%d occurs %d times : ",array[i],freq[i]);
		}
		i++;
		
	}
	
	
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
	
	count_frequency(start);
}
