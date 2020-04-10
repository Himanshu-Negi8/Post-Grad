#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	
	int data;
	struct node*next;
	
}node;


node*insertion(node*last,int val)
{
	node*p = (node*)malloc(sizeof(node));
	p->data = val;
	if(last==NULL)
	{
		last=p;
		last->next=p;
	}else{
		
		p->next=last->next;
		last->next=p;
	}
	return last;
}



void display(node*p)
{
	node*temp = p->next;
	char ch;

	do{
		printf("%d ",temp->data);
		temp=temp->next;
	}while(temp!=p->next);

	
}
int main()
{
	node*last = NULL;
	char ch;
	do{
		
		
		int option;
		
	
		printf("\nEnter one of these operations : \n1.Insert the element\n2.Display the element\n");
		scanf("%d",&option);
		if(option==1){
			int val;
			printf("\nEnter element : ");
			scanf("%d",&val);
			last = insertion(last,val);
		}
		if(option==2){
			if(last==NULL){
						printf("Nothing to display\n");
			}else{
				display(last);
			}
			
		}
	
		printf("\nDo you want to continue:");
		scanf(" %c",&ch);
		system("cls");
	}while(ch=='Y'||ch=='y');
	
	return 0;
}
