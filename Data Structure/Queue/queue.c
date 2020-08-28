#include<stdio.h>


int enqueue(int arr[],int rear, int n){
	
	if(rear==n-1){
		printf("can't enqueue the element\n");
		return rear;
	}
	
		int val;
		printf("Enter the value:");
		scanf("%d",&val);
		rear+=1;
		arr[rear]=val;
		return rear;
	
	
	
}


int dequeue(int arr[], int front, int n){
	
	if(front==-1){
		printf("already empty\n");
		return front;
	}
	
	printf("%d dequeued from queue\n",arr[front]);
	
	return front=front+1;
}
int main(){
	
	int n;
	printf("enter the size of the array : ");
	scanf("%d",&n);
	
	int*arr = (int*)malloc(sizeof(int)*n);
	
	int front=-1,rear=-1;
	
	rear = enqueue(arr,rear,n);
	
	if(rear==0){
		front=0;
	}
	front = dequeue(arr,front,n);
	return 0;
}
