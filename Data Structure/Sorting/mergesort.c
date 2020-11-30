#include<stdio.h>


void merge(int arr[], int low, int end){
	
	int mid = (low+end)/2;
	
	int i=low;
	int j = mid+1;
	int k=low;
	
	int temp[100];
	
	
	while(i<=mid && j<=end){
		if(arr[i]<arr[j]){
			temp[k++]=arr[i++];
		}else{
			temp[k++]=arr[j++];
		}
	}
	
	while(i<=mid){
		temp[k++]=arr[i++];
	}
	while(j<=end){
		temp[k++]=arr[j++];
	}
	
	for(i=low;i<=end;i++){
		arr[i]=temp[i];
	}
}

void mergesort(int arr[], int low, int end){
	
	if(low<end){
		
		int mid = (low+end)/2;
	
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,end);
		merge(arr,low,end);
	}
	

}



int main(){
	
	int arr[30],n,i;
	
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	printf("Enter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	mergesort(arr,0,n-1);
	
	printf("Array elements now:");
	
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
