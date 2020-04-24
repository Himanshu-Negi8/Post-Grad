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
