#include<stdio.h>
#include<stdlib.h>

typedef struct cir_list

{ 
int data;

 struct cir_list* left, *right;
 strcut cir_list*next;

}node_type;

void *  insert(node_type**l,nodetype**r){
	int val;
	printf("Enter the value to be inserted : ");
	scanf("%d",&val);
	
	node_type*temp = (node_type*)malloc(sizeof(node_type));
	temp->data=val;
	if(*r==NULL && *l==NULL){
		*l=*r=temp;
	}else{
		*r->next=temp;
		*r=temp;
	}
	
	
	
	
}
void display(node_type*t){
	while(*t!=NULL){
		printf("%d ",t->data);
		t=t->next;
	}
}
void main(){
		node_type*l,node_type*r;
		
		insert(&l,&r);
		insert(&l,&r);
		insert(&l,&r);
		insert(&l,&r);
		display(l);
	
}
