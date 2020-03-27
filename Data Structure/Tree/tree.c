#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	
	int data;
	struct node*left,*right;
}node;

node*newNode(int item)
{
	node*temp = (node*)malloc(sizeof(node));
	temp->data = item;
	temp->left=temp->right=NULL;
	return temp;
	
}

node*insert(node*root,int data)
{
	if(root==NULL)
	{
		return newNode(data);
	}
	else if(data<=root->data)
	{
		root->left = insert(root->left,data);
	}
	else
	{
		root->right=insert(root->right,data);
	}
	return root;
}

void preorder(node*root)
{
	if(root!=NULL)
	{
	printf("%d",root->data);
	printf("\n");
	preorder(root->left);
	preorder(root->right);
	}
	
}
void inorder(node*root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d",root->data);
		printf("\n");
		inorder(root->right);
		
	}
}
void main()
{
	node*root = NULL;
	root = insert(root,30);
	insert(root,40);
	insert(root,20);
	insert(root,10);
	insert(root,50);
	insert(root,5);
	preorder(root);
	inorder(root);
}
