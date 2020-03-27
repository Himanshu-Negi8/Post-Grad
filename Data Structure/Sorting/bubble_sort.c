#include<stdio.h>

/*

Program for Bubble Sort

*/

int main()
{
	int size;
	
	printf("Enter the size of the array : ");
	scanf("%d",&size);
	
	int arr[size],temp,i,j;
	
	printf("Enter element for array : ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	//bubble sort 
	
	for(i=0;i<size-1;i++) //n-1 passes according to the algorithm if size is 5 then passes are 0 1 2 3 coz <4
	{
		for (j=0;j<size-1-i;j++) //size-1-i exchange or comparison
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	printf("\nafter the sorting the array is : \n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
