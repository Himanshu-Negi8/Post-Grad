#include<stdio.h>
#include<stdlib.h>

#define MAX(a,b) ((a>b)?a:b)

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


node*deleteNode(node*root,int key)
{
	if(root==NULL){
		return root;
	}
	
	else if(key<root->data){
		root->left = deleteNode(root->left,key);
		return root;
	}
	
	else if(key>root->data){
		root->right = deleteNode(root->right,key);
		return root;
	}
	else if(root->data==key){
		//node is leaf
		
			if(root->left==NULL && root->right==NULL){
				free(root);
				return NULL;
				
			}
			
			//node having 1 child only
			
			if(root->left!=NULL && root->right==NULL){
				node*temp = root->left;
				free(root);
				return temp;
			}
			
			if(root->left==NULL && root->right!=NULL){
				node*temp = root->right;
				free(root);
				return temp;
			}
			
			//3.node with 2 child
			
			node*replace = root->right;
			while(replace->left!=NULL){
				replace = replace->left;
			}
			root->data = replace->data;
			root->right = deleteNode(root->right,replace->data);
			
			return root;
		}
		 
		
}
	



int height(node*root)
{
	if(root==NULL)
	{
		return 0;
	}
	int left = height(root->left);
	int right = height(root->right);
	return MAX(left,right)+1;
}

void printKthlevel(node*root,int k)
{
	if(root==NULL)
	{
		return;
	}
	if(k==1)
	{
		printf("%d ",root->data);
		return;
	}
	printKthlevel(root->left,k-1);
	printKthlevel(root->right,k-1);
}

void printAllLevels(node*root)
{
	int h = height(root);
	int i;
	for(i=1;i<=h;i++)
	{
		printf("printing %d level : ",i);
		printKthlevel(root,i);
	
		printf("\n");
		
	}
}
int countNodes(node*root){
	
	if(root==NULL){
		return 0;
	}
	int left = countNodes(root->left);
	int right=countNodes(root->right);
	return left+right+1;
}



int sumOfAllNodes(node*root){
	
	if(root==NULL){
		return 0;
	}
	int leftSum = sumOfAllNodes(root->left);
	int rightSum = sumOfAllNodes(root->right);
	
	return leftSum+rightSum+root->data;
}

int diameter(node*root){
	
	if(root==NULL){
		return 0;
	}
	
	int h1 = height(root->left);
	int h2 = height(root->right);
	int op1 = h1+h2;
	int op2 = diameter(root->left);
	int op3 = diameter(root->right);
	return MAX(op1,MAX(op2,op3));
}

int replaceParentWithChildSum(node*root){
	
	if(root==NULL){
		return 0;
	}
	
	if(root->left==NULL&&root->right==NULL){
		return root->data;
	}
	
	int leftSum = replaceParentWithChildSum(root->left);
	int rightSum =replaceParentWithChildSum(root->right);
	
	root->data = rightSum+leftSum;
	return root->data;
	
	
}
void main()
{
	node*root = NULL;
	root = insert(root,50);
	insert(root,22);
	insert(root,34);
	insert(root,70);
	insert(root,67);
	insert(root,89);
	insert(root,54);
	insert(root,32);
	insert(root,14);
	insert(root,56);
	insert(root,66);
	insert(root,80);
	
	
	printAllLevels(root);
	printf("height of the tree :%d\n",height(root));
	
	deleteNode(root,54);
	printAllLevels(root);


}
