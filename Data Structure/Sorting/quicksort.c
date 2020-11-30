#include<stdio.h>



int partition(int arr[], int start, int end){
	
	int i=start-1;
	int j = start;
	int pivot = arr[end];
	
	for( ;j<end;j++){
		if(arr[j]<=pivot){
			i++;
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			
		}
	}
	int temp=arr[i+1];
	arr[i+1]=arr[j];
	arr[j]=temp;
//	swap(arr[i+1],arr[end]);
	
	return i+1;
}

void quicksort(int arr[], int start, int end){
	
	if(start>=end) return ;
	
	int p = partition(arr,start,end);
	quicksort(arr,start,p-1);
	quicksort(arr,p+1,end);
}
int main(){
	
	int n,arr[30],i;
	printf("Enter size of the array : ");
	scanf("%d",&n);
	
	printf("Enter array elements : ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	quicksort(arr,0,n-1);
	
	printf("Array is : ");
	
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
