#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

typedef struct node{
	
	char info;
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
		printf("%c ",p->info);
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

void checkPalindrome(node*head)
{
	node*temp;
	temp=head;
	
	char array[255];
	int i=0,flag=0;
	while(temp!=NULL)
	{
		array[i]=temp->info;
		temp=temp->next;
		i++;
	}
	i=0;
	int  j =strlen(array)-1;
	
	while(i<=j)
	{
		if(array[i]!=array[j])
		{
			printf("not palindrome");
			flag=1;
			break;
		}
		i++;j--;
	}
	if(flag==0)
	printf("Palindrome");
}

void main()
{
	node*start = NULL;
	char val;
	int n;
	printf("enter no of char you want to insert : ");
	scanf("%d",&n);
	while(n--)
	{
			printf("enter the item to be inserted : ");
			scanf(" %c",&val);
			start = insertNodeAtEnd(start,val);
			
	}
	
	
	checkPalindrome(start);
	
}
