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

void display(node*head)
{
	while(head!=NULL)
	{
		printf("%d ",head->info);
	}
}
int main()
{
	
	node*head = NULL;
	insertAtHead(&head,10);
	insertAtHead(&head,20);
	insertAtHead(&head,30);
	
	display(head);
	return 0;
}
