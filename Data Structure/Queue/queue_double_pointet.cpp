#include<stdio.h>
#incldue<stdlib.h>

typedef struct node{
	
	int data;
	struct node*next;
}node;


void insert(node**rear,int value)
{
	node*temp = (node*)malloc(sizeof(node));
	temp->data = value;
	if(*rear==NULL)
	{
		*rear = temp;
		return;
	}
	*rear->next = temp;
	*rear = temp;
}

void display(node**front)
{
	node*temp = (*front);
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
void main()
{
	node*front,*rear;
	front = rear = NULL;
	
	insert(&rear,20);
	if(front==NULL)
	{
		front=rear;
	}
	insert(&rear,30);
	insert(&rear,40);
	display(&front);
}
