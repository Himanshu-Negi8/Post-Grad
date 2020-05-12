#include<stdio.h>
#include<stdlib.h>

#define MAX(a,b) ((a>b)?a:b)

typedef struct node{
	
	char data;
	struct node*left,*right;
}node;

node*newNode(char item)
{
	node*temp = (node*)malloc(sizeof(node));
	temp->data = item;
	temp->left=temp->right=NULL;
	return temp;
	
}

node*insert(node*root,char data)
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
	printf("%c",root->data);
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
		printf("%c",root->data);
		printf("\n");
		inorder(root->right);
		
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
		printf("%c ",root->data);
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
	root = insert(root,'M');
	insert(root,'N');
	insert(root,'R');
	insert(root,'T');
	insert(root,'S');
	insert(root,'D');
	insert(root,'H');
	insert(root,'A');
	insert(root,'W');
	insert(root,'B');
	insert(root,'Z');
	insert(root,'C');
	
	
	
	
	printAllLevels(root);
	
	printf("height of the tree :%d",height(root));
	


}
