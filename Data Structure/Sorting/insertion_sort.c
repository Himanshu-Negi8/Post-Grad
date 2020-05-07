#include<stdio.h>

/*

Program for insertion sort 

*/

void insertion_sort(int arr[],int n)
{
	int i,j,temp;
	
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0 && temp<arr[j])
		{
			arr[j+1]=arr[j];
			j--;
	
		}
		arr[j+1]=temp;
		
	}
}

int main()
{
	int size,i;
	printf("enter the size of the array : ");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter element for array : ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	insertion_sort(arr,size);
	
	printf("\nafter the sorting the array is : \n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	
}
