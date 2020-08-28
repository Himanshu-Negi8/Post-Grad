#include<stdio.h>
#include<stdlib.h>

typedef struct stack{
	int data;
	struct stack*next;
	
}nodetype;


void push(nodetype**head_ref,int value)
{
	nodetype*temp = (nodetype*)malloc(sizeof(nodetype));
	temp->data=value;
	temp->next = (*head_ref);
	*head_ref = temp;	
}


void pop(nodetype**head_ref){
	
	nodetype*p = (*head_ref);
	printf("%d deleted node",p->data);
	*head_ref=(*head_ref)->next;
	free(p);
}

void display(nodetype*head)
{
	while(head!=NULL)
	{
		printf("%d ",head->data);
		head=head->next;
	}
}
int main()
{
	
	nodetype*head = NULL;
	char ch ;
	
	do{
		int option;
		
	
		printf("\nEnter one of these operations : \n1.Insert the element\n2.remove the element\n3.display the element\n");
		scanf("%d",&option);
		
		if(option==1)
		{
			int val;
			printf("\nEnter element : ");
			scanf("%d",&val);
			push(&head,val);
		}
		else if(option ==2)
		{
			if(head==NULL){
				printf("nothing to pop");
			}else{
				pop(&head);
			}
			
		}
		else{
			if(head==NULL){
				printf("nothing to display");
			}else{
				display(head);
			}
		}
		printf("\nDo you want to continue:");
		scanf(" %c",&ch);
		system("cls");
	}while(ch=='Y'||ch=='y');
	
	return 0;
}
