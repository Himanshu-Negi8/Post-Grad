#include<stdio.h>

void swap(int *a, int*b){
	int temp = *a;
	*a =*b;
	*b =temp;
}

int main(){
	
	
	int n;
	int rows,cols;
	printf("enter the dimensions for square matrix : ");
	scanf("%d",&n);
	
	int arr[n][n];
	rows=cols=n;
	int i,j;
	
	printf("\nenter array elements:\n");
	
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	//logic for transpose in-place don't conside the same row-col which was considered earlier
	for(i=0;i<rows;i++){
		for(j=i;j<cols;j++){
			swap(&arr[i][j],&arr[j][i]);
		}
	}
	
	//add this snippet to get clockwise rotation
   
	for(i=0;i<rows;i++){
		
		int j=0;
		int c = cols-1;
		while(j<c){
			swap(&arr[i][j],&arr[i][c]);
			j++;c--;
		}
	}
	
	printf("\narray elements after clockwise rotation:\n");
	
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
