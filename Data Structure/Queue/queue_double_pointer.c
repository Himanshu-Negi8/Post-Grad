#include<stdio.h>
#include<stdlib.h>

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
		//if we are inserting first time we will just make temp as rear 
	}
	else
	{
		(*rear)->next = temp; 
		
		/*if we have already some nodes we will add this node in next of rear and 
		then this node as rear as it is the last node we inserted then we will make it's next null 
		so that it will not give us error of infine loop while displaying the element*/
		
		(*rear) = temp;
		
		(*rear)->next=NULL;
	}
	
	
}

void remove_node(node**front)
{
		node*temp= *front;
		printf("%d removed\n",temp->data);
		if((*front)->next==NULL)
		{
			(*front)=NULL;
		}else{
			*front=(*front)->next;
		}
		
		free(temp);

}
void display(node*front)
{
	node*temp = front;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
void main()
{
	node*front=NULL;
	node*rear=NULL;
	char ch ;
	
	do{
		int option;
		
	
		printf("\nEnter one of these operations : \n1.Insert the element\n2.remove the element\n3.display the element\n");
		scanf("%d",&option);
		if(option==1){
			int val;
			printf("\nEnter element : ");
			scanf("%d",&val);
			insert(&rear,val);
			if(front==NULL)
			{
				front=rear;
				
			}
		}
		else if(option==2)
		{
			if(front==NULL)
			{
				printf("Queue is empty already.");
			}
			
			else{
				remove_node(&front);
				if(front==NULL)
				{
					rear=front;
				}
			}
		}
		else
		{
			if(front==NULL)
			{
				printf("nothing to display\n");
			}else
			{
				display(front);
			}
			
		}
		
		printf("\nDo you want to continue:");
		scanf(" %c",&ch);
		system("cls");
	}while(ch=='Y'||ch=='y');
	
	

}
