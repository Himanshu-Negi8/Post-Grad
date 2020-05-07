```c
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

int height(node*root)
{
	if(root==NULL)
	{
		return 0;
	}
	int left = height(root->left);
	int right = height(root->right);
	return max(left,right)+1;
}

void printKthlevel(node*root,int k)
{
	if(root==NULL)
	{
		return;
	}
	if(k==1)
	{
		cout<<root->data<<" ";
		return;
	}
	printKthlevel(root->left,k-1);
	printKthlevel(root->right,k-1);
}

void printAllLevels(node*root)
{
	int h = height(root);
	for(int i=1;i<=h;i++)
	{
		printKthlevel(root,i);
		cout<<endl; 
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


//printing the level wise tree in O(n) time
void bfs(node*root) {

	queue<node*>q;
	
	q.push(root);
	
	while(!q.empty()){
		
		node*f = q.front();
		if(f==NULL)
		{
				cout<<endl;
				q.pop();
				if(!q.empty()){
					q.push(NULL);
				}
		}else{
			cout<<f->data<<" ";
			q.pop();
			if(f->left){
				q.push(f->left);
			}
			if(f->right){
				q.push(f->right);
			}
		}
		
	}
	return;
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
	return max(op1,max(op2,op3));
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
	root = insert(root,30);
	insert(root,40);
	insert(root,20);
	insert(root,10);
	insert(root,50);
	insert(root,5);
	preorder(root);
	inorder(root);
}


```

---
