#include<stdio.h>

/*

Program for selection sort 

*/

void selection_sort(int arr[],int n)
{
	int i,j,min,pos;
	
	for(i=0;i<n-1;i++)
	{
		min=arr[i];
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(min>arr[j])
			{
				min=arr[j];
				pos=j;
			}
		}
		if(pos!=i)
		{
			arr[pos]=arr[i];
			arr[i]=min;
		}
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
	selection_sort(arr,size);
	
	printf("\nafter the sorting the array is : \n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	
}
