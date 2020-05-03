# Program for Linked List

```c
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

node*deleteAtHead(node*head)
{
	if(head==NULL)
	{
		printf("empty\n");
		return NULL;
	}
	else
	{
		node*p; 
		p=head;
		head=head->next;
		printf("%d is deleted\n",p->info);
		free(p);
	}
	
	return head;
}

node*deleteAtLast(node*head)
{
	if(head==NULL)
	{
		return NULL;
	}
	else
	{
		node*temp=head;
		
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
	start=deleteAtHead(start);
	display(start);
	
}
```
---
# Linked using Double Pointer

```c
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	
	struct node*next;
	int info;
}node;

void insertAtHead(node**head_ref,int value)
{
	node*temp = (node*)malloc(sizeof(node));
	temp->info=value;
	temp->next = (*head_ref);
	*head_ref = temp;	
}
void pop(node**head_ref){
	if(*head_ref==NULL){
		printf("nothing");
	}
	else{
		node*p = (*head_ref);a
		printf("%d deleted node",p->info);
		*head_ref=(*head_ref)->next;
		free(p);
	}
	
}
void append(node**head_ref,int value)
{
	node*temp = (node*)malloc(sizeof(node));
	temp->info=value;
	temp->next =NULL;
	
	node*last =*head_ref;
	
	if(*head_ref==NULL){
		*head_ref=temp;
		return;
	}else{
		while(last->next!=NULL){
			last=last->next;
		}
		last->next=temp;
		return;
	}
	
}
void display(node*head)
{
	while(head!=NULL)
	{
		printf("%d ",head->info);
		head=head->next;
	}
}
int main()
{
	
	node*head = NULL;
	insertAtHead(&head,10);
//	append(&head,40);
	insertAtHead(&head,20);
	insertAtHead(&head,30);
	display(head);
	printf("\n");
	pop(&head);
	printf("\n");
	display(head);
	return 0;
}
```
