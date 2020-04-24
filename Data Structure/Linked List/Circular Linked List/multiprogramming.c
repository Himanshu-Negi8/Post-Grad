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

	printf("\n");
}

void compute(node*last,int n,int ns)
{

	int time=0;
	

	node*current=last->next;
	node*prev=current;
	
	
	
	while(n!=0)
	{
		
			current->data = current->data-ns; //example previous 2 but ns is 20 so it is -18
			if(current->data<0){
				int t = abs(current->data); //t becomes 18 
				time+=abs(ns-t); //time required is 20-18 i.e 2
			}else{
				time+=ns;
			}
			
			if((current->data==0 || current->data<0)&& (current==last->next))
			{
				current =current->next;
				prev =current;
				last->next=current;
				printf("%d nano sec taken\n",time);
				n--;
			} 
			
			else if(current->data==0 || current->data <0)
			{

			prev->next=current->next;
			
			current=current->next;
			
			printf("%d nano sec taken\n",time);
			n--;

		
		}
	 
		else if(current->next==last->next)
		{
			prev=last->next;
			current=last->next;
			
		}
		else{
			prev=current;
		current=current->next;
		
		}
	}
	
	
}
int main()
{
	node*last = NULL;
	
	int n,ns,temp;
	printf("Enter the number of process and nano-secs:");
	scanf("%d%d",&n,&ns);
	temp=n;
	while(n){
		int val;
	printf("\nEnter element : ");
	scanf("%d",&val);
	last = insertion(last,val);
	n--;
	}
	
	printf("Below are the processes : ");
	display(last);
	
	compute(last,temp,ns);
	
	
	
	return 0;
}
