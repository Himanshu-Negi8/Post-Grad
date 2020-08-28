#include<stdio.h>

#include<stdlib.h>



typedef struct cir_list



{ 

int data;



 struct cir_list* left, *right;

 struct cir_list*next;



}node_type;



void insert(node_type**l,node_type**r){

	int val;

	printf("Enter the value to be inserted : ");

	scanf("%d",&val);

	

	node_type*temp = (node_type*)malloc(sizeof(node_type));

	temp->data=val;

	if(*r==NULL){
		temp->right=temp;
		temp->left=temp;
		*r=temp;

	}else{
		temp->left=(*r);
		(*r)->right=temp;
		
		*r=temp;

	}

	

}





void display(node_type*t){

	if(t==NULL){

		printf("Nothing in queueu");

	}

	while(t!=NULL){

		printf("%d ",t->data);

		t=t->right;

	}

}

void main(){

	node_type*l=NULL;

	node_type*r=NULL;

	char ch ;

	

	do{

		int option;

		

		printf("\nEnter one of these operations : \n1.Insert the element\n2.display the element\n");

		scanf("%d",&option);

		if(option==1){

			insert(&l,&r);

			if(l==NULL){
				l=r;
			}

		}

		if(option==2){

			display(l);

		}

		printf("\nDo you want to continue:");

		scanf(" %c",&ch);

		system("cls");

	}while(ch=='Y'||ch=='y');

		

		


}
